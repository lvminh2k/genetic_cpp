#include "Products.h"

Products::Products(){
}
Products::Products(int ProductId, string ProductName, int SupplierId, int CategoryId, string Unit, double Price){
    this->ProductId = ProductId;
    this->ProductName = ProductName;
    this->SupplierId = SupplierId;
    this->CategoryId = CategoryId;
    this->Unit = Unit;
    this->Price = Price;
}

string Products::ToString(){
    string s;
    s += "{";
    s += to_string(ProductId) + ", ";
    s += ProductName + ", ";
    s += to_string(SupplierId) + ", ";
    s += to_string(CategoryId) + ", ";
    s += Unit + ", ";
    s += to_string(Price);
    s += "}";
    return s;
}

/** @brief Function converts this object to json object.
 *  
 *  Function converts this object to json object.
 *  @return a json object;
 *  Example: Products p(2, "Chang", 1, 1, "bottle", 19.0) -> {"CategoryId":1,"Price":19.0,"ProductId":2,"ProductName":"Chang","SupplierId":1,"Unit":"bottle"}
 */
json Products::ToJson(){
    json j;
    j["ProductId"] = ProductId;
    j["SupplierId"] = SupplierId;
    j["CategoryId"] = CategoryId;
    j["Price"] = Price;
    j["ProductName"] = ProductName;
    j["Unit"] = Unit;
    return j;
}