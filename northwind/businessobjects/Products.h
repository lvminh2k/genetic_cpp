#ifndef _Products_h
#define _Products_h

#include <string>
using namespace std;
class Products{
public:
    int ProductId, SupplierId, CategoryId;
    double Price;
    string ProductName, Unit;
public:
    Products();
    Products(int ProductId, string ProductName, int SupplierId, int CategoryId, string Unit, double Price);
};
#endif