#ifndef _Products_h
#define _Products_h

#include <string>
#include "../libs/json.hpp"

using namespace std;
using json = nlohmann::json;

class Products{
public:
    int ProductId, SupplierId, CategoryId;
    double Price;
    string ProductName, Unit;
public:
    Products();
    Products(int ProductId, string ProductName, int SupplierId, int CategoryId, string Unit, double Price);
    string ToString();
    json ToJson();
};
#endif