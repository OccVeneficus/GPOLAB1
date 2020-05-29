#include "Cart.h"
#include "Product.h"
#include "ProductList.h"

using std::cout;
using std::cin;
using std::endl;

int main()
{
	Product* products = new Product[5];
	products[0].SetCost(rand()%50);
	products[0].SetDescription("sdfddadsd");
	products[0].SetName("A");
	products[1].SetCost(rand() % 50);
	products[1].SetDescription("sdfdddddadsd");
	products[1].SetName("b");
	products[2].SetCost(rand() % 50);
	products[2].SetDescription("sdfddssd");
	products[2].SetName("c");
	products[3].SetCost(rand() % 50);
	products[3].SetDescription("sdfbvdsd");
	products[3].SetName("d");
	products[4].SetCost(rand() % 50);
	products[4].SetDescription("sdfrqrdsd");
	products[4].SetName("e");

	ProductList list(products, 5, "Test");

	Product* secondProducts = new Product[3];
	secondProducts[0].SetCost(rand() % 50);
	secondProducts[0].SetDescription("ssdd");
	secondProducts[0].SetName("P");
	secondProducts[1].SetCost(rand() % 50);
	secondProducts[1].SetDescription("sddsdsd");
	secondProducts[1].SetName("G");
	secondProducts[2].SetCost(rand() % 50);
	secondProducts[2].SetDescription("sdfdsdsd");
	secondProducts[2].SetName("Q");

	Cart cart(secondProducts, 3);
	
	cout << "Total cost = " << cart.GetFullCost() << endl;

	system("Pause");
	return 0;
}