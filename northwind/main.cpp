#include <iostream>
#include <fstream>
#include <stdio.h>
#include <string.h>
#include "businessobjects/Products.h"
#include "dataaccess/ProductsData.h"
#include "libs/json.hpp"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;
using json = nlohmann::json;

void write_products_to_file(){

	Products p1(1, "Chais", 1, 1, "bottle", 18.0);
	Products p2(2, "Chang", 1, 1, "bottle", 19.0);
	Products p3(3, "Aniseed Syrup", 1, 1, "bottles", 10.0);
	Products p4(4, "Chef Anton's Cajun Seasoning", 1, 1, "jars", 22.0);
	Products p5(5, "Chef Anton's Gumbo Mix", 1, 1, "boxes", 21.35);

	ProductsData productsdata;
	productsdata.PushBack(p1);
	productsdata.PushBack(p2);
	productsdata.PushBack(p3);
	productsdata.PushBack(p4);
	productsdata.PushBack(p5);

	for (int i=0; i<productsdata.GetSize(); i++){
		Products p = productsdata.Get(i);
		cout << p.ToString() << endl;
	}
	productsdata.ExportToFile("Products.data");
}

void read_products_from_file(){
	ProductsData productsdata("Products.data");
	for (int i=0; i<productsdata.GetSize(); i++){
		Products p = productsdata.Get(i);
		cout << p.ToString() << endl;
	}
}
void create_product_convert_to_json(){
	Products p(2, "Chang", 1, 1, "bottle", 19.0);
	json j = p.ToJson();
	cout << j;
}

int main(int argc, char** argv) {

	//create_product_convert_to_json();
	//write_products_to_file();
	read_products_from_file();
	return 0;
}
