// write a program to implement sum and minus using hybrid inheritence

#include <iostream>
using namespace std;

class Arithmatic{
	public:
	int n1, n2;
};

class Add: public Arithmatic{
	public:
	void sum(){
		cout << "\nSum of n1 and n2 is " << (n1 + n2);
	}
};

class Minus{
	public:
	void sub(int n1, int n2){
		cout << "\nMinus of n1 and n2 is " << (n1 - n2);
	}
};

class result: public Add, public Minus {
	public:
	void getdata(){
		cout << "Enter n1 and n2: ";
		cin >> n1 >> n2;
		sum();
		sub(n1, n2);
	}
};

int main(){
	result r;
	r.getdata();
}
