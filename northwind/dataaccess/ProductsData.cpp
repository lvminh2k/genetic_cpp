/** @file ProductsData.h
 *  @brief ProductsData stores all Products objects
 *  
 *  @author Van-Minh Le (lvminh2k)
 *  @bug No known bugs.
 */

#include "ProductsData.h"
#include <fstream>
#include "../libs/json.hpp"

using json = nlohmann::json;

ProductsData::ProductsData(){
    maxId = 0;
    _data.resize(0);
}

ProductsData::ProductsData(string filename){
    maxId = 0;
    _data.resize(0);
    ifstream inFile(filename);
    const int maxSize = 255;
    char buff[maxSize]; 
    while (inFile.getline(buff,maxSize)){
        json j = json::parse(buff);
        Products p(
            j["ProductId"],
            j["ProductName"],
            j["SupplierId"],
            j["CategoryId"],
            j["Unit"],
            j["Price"]
        );
        _data.push_back(p);
    }
    inFile.close();
}
/** @brief Function add a Products object to the end of the list inside ProductsData.
 *  
 *  Function add a Products object to the end of the list inside ProductsData.
 *  @return maxId of Products object inside ProductsData;
 */
int ProductsData::PushBack(Products p){
    //at first, there nothing, maxId = 0
    
    //assume p.ProductId = 5, then maxId = 5
    if (maxId < p.ProductId) maxId = p.ProductId;

    //add a Products object to ProductsData
    _data.push_back(p);
    return maxId;
}

/** @brief Function updates a Products object at a position inside the list inside ProductsData.
 *  
 *  Function updates a Products object at a position inside the list inside ProductsData.
 *  @return maxId of Products object inside ProductsData;
 *  if fail, return -1;
 */
int ProductsData::Update(int i, Products p){
    if (i < 0) return -1;
    if (i >= _data.size()) return -1;
    _data[i] = p;
    //assume p.ProductId = 5 and maxId = 4, then maxId = 5
    if (maxId < p.ProductId) maxId = p.ProductId;
    return maxId;
}

/** @brief Function return a Products object at a position inside the list inside ProductsData.
 *  
 *  Function return a Products object at a position inside the list inside ProductsData.
 *  @return Products object;
 *  if fail, return NULL;
 */
Products ProductsData::Get(int i){
    string s("index out of bound!");
    if (i < 0) throw s;
    if (i >= _data.size()) throw s;
    return _data[i];
}

Products* ProductsData::GetPointer(int i){
    Products* p = nullptr;
    if (i < 0) return p;
    if (i >= _data.size()) return p;
    p = &_data[i];
    return p;
}

/** @brief Function return size of ProductsData.
 *  
 *  Function return size of ProductsData. This is the quantity of Products objects inside ProductsData.
 *  @return number of Products objects;
 */
int ProductsData::GetSize(){
    return _data.size();
}

/** @brief Function write all data in ProductsData to file.
 *  
 *  Function write all data in ProductsData to file.
 *  @return 1 if success, 0 if fail;
 */
int ProductsData::ExportToFile(string filename){
    ofstream outFile(filename, ios::out);
    if (!outFile) return 0;
    for (Products p:_data){
        outFile << p.ToJson() << endl;
    }
    outFile.close();
    return 1;
}