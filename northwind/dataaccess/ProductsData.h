#ifndef _Products_Data_h
#define _Products_Data_h
#include <vector>
#include "../businessobjects/Products.h"

class ProductsData{
public:
    int maxId;
private:
    vector<Products> _data;
public:
    ProductsData();
    ProductsData(string);
    int PushBack(Products);
    int Update(int, Products);
    Products Get(int);
    int GetSize();
    int ExportToFile(string);
};
#endif