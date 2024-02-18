// Write a program in c++ to define member functions of outside the class.

#include <iostream>
using namespace std;

class item{
	private:
		int codeno;
		float price;
		int qty;
	public:
		void show(void);
};

void item::show(void){
	codeno = 125;
	price = 2.42;
	qty = 15;
	cout << "Codeno: " << codeno << endl;
	cout << "Price: " << price << endl;
	cout << "Quantity: " << qty;
}

int main(){
	item x;
	x.show();
	return 0;
}
