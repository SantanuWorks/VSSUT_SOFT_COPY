// write a program to perform increment on complex number.

#include <iostream>
using namespace std;

class complex{
	
	int a, b;
	public:
	complex(){
		a = 0, b = 0;
	}
	void getdata(){
		cout << "Enter a, b: ";
		cin >> a >> b;
	}
	void operator ++(){
		a = ++ a;
		b = ++ b;
	}
	
	void operator --(){
		a = -- a;
		b = -- b;
	}
	void display(){
		cout << endl << a << " + i " << b;
	}
};

int main(){
	complex c;
	c.getdata();
	c.display();
	++ c;
	c.display();
	-- c;
	c.display();
}
