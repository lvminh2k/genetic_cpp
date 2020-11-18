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