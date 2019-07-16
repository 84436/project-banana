#include "Product.h"

Product::Product()
{
	_Seller = nullptr;
	_ID = "";
	_Name = "";
	_Category = "";
	_Decription = "";
}

Product::Product(string _SellerID, string _ID, string _Name, string _Category, string _Description, int32_t _Stock, int64_t _Price, int64_t _ShippingFee)
{
	Seller(_SellerID);
	ID(_ID);
	Name(_Name);
	Category(_Category);
	Description(_Description);
	Stock(_Stock);
	Price(_Price);
	ShippingFee(_ShippingFee);
}

Product::Product(const Product& p)
{
	this->_Seller = p._Seller;
	this->_ID = p._ID;
	this->_Name = p._Name;
	this->_Category = p._Category;
	this->_Decription = p._Decription;
	this->_Stock = p._Stock;
	this->_Price = p._Price;
	this->_ShippingFee = p._ShippingFee;

	for (int i = 0; i < 5; i++) {
		this->_Rating[i] = p._Rating[i];
	}
}

//void Product::GetInfo(){
//	cout << endl << "\t \t INFORMATION : " << endl;
//	cout << "\t \t PROVIDER : " << endl;
//	_Seller->OutputInfo();
//	cout << "\t \t PRODUCT INFORMATION : " << endl;
//	cout << "\t ID : \t" << ID << endl;
//	cout << "\t Name : \t" << Name << endl;
//	cout << "\t Category : \t" << Category << endl;
//	cout << "\t Decription : \t" << Decription << endl;
//	cout << "\t Stock : \t" << Stock << endl;
//	cout << "\t Price : \t" << Price << endl;
//	cout << "\t Shipping Fee : \t" << ShippingFee << endl;
//	cout << "\t Rating : \t" << (1 * Rating[0] + 2 * Rating[1] + 3 * Rating[2] + 4 * Rating[3] + 5 * Rating[4]) / (Rating[0] + Rating[1] + Rating[2] + Rating[3] + Rating[4]) << endl;
//}

void Product::Rate(int){
	int n;
	cout << "How many Stars you want to rate this Product (1 - 5) : ";
	cin >> n;
	//Rating[n - 1]++; ??
}