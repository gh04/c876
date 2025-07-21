#include <iostream>
#include <string>
#include <vector>
using namespace std;

/* ----------  Product (single price + name)  ---------- */
class Product {
   public:
      void SetPriceAndName(int productPrice, string productName) {
         price = productPrice;
         name = productName;
      };
      int GetPrice() const { return price; };
      string GetName() const { return name; };
   private:
      int price; // in dollars
      string name;
};
// END Product class

/* ----------  Products (collection of Products objects)  ---------- */
class Products {
   public:
      void InputProducts();
      void PrintAfterDiscount(int discountPrice);
   private:
      vector<Product> productList;
};

void Products::InputProducts() {
   Product currProduct;
   int currPrice;
   string currName;

   cin >> currPrice;
   while (currPrice > 0) {
      cin >> currName;
      currProduct.SetPriceAndName(currPrice, currName);
      productList.push_back(currProduct);
      cin >> currPrice;
   }
}

void Products::PrintAfterDiscount(int discountPrice) {
   unsigned int i;
   int currDiscountPrice;

   for (i = 0; i < productList.size(); ++i) {
      currDiscountPrice = productList.at(i).GetPrice() - discountPrice;
      cout << "$" << currDiscountPrice << " " << productList.at(i).GetName() << endl;
   }
}
// END Products class

/* ----------  Store (single store name + products)  ---------- */
class Store {
   public:
      void SetName(string storeName) {
         name = storeName;
      }
      void ReadAllProducts();
      void PrintSale(int saleAmount);
   private:
      string name;
      Products products;
};

void Store::ReadAllProducts() {
   products.InputProducts();
}

void Store::PrintSale(int saleAmount) {
   cout << name << "'s sale:" << endl;
   products.PrintAfterDiscount(saleAmount);
}
// New: END Store class

int main() {

   // New: main() now uses Store class
   Store ourPlace;
   string currName;

   cin >> currName;
   ourPlace.SetName(currName);

   ourPlace.ReadAllProducts();
   ourPlace.PrintSale(2);

   return 0;
}	

/*
 *    input:
 *        QMart
 *        9 Tuna
 *        8 Socks
 *        -1
 *
 *    output:
 *        QMart's sale:
 *        $7 Tuna
 *        $6 Socks
 */