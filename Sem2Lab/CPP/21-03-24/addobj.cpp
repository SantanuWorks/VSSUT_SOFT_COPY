// write a program to add two object and store their result in third object and display its content.

#include <iostream>
using namespace std;

class num{
	public:
	int x, y;
	num(){
		x = 0, y = 0;
	}
	num(int a, int b){
		x = a, y = b;
	}
	void getdata(){
		cout << "\nx = " << x << ", y = " << y;
	}
};

int main(){
	num a(2, 4);
	num b(3, 5);
	num c;
	
	c.x = a.x + b.x;
	c.y = a.y + b.y;
	
	a.getdata();
	b.getdata();
	c.getdata();	
}
