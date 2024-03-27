// write a program to overload ++ and -- for prefix and postfix using member function.

#include <iostream>
using namespace std;

class num{
	float x;
	public:
	num(float k){
		x = k;
	}
	void operator ++(){
		++ x;
	}
	void operator --(){
		-- x;
	}
	void operator ++(int){
		x ++;
	}
	void operator --(int){
		x --;
	}
	void show(){
		cout << "\nx = " << x;
	}
};

int main(){
	num x(2.7f);
	++ x;
	x.show();
	-- x;
	x.show();
	x ++;
	x.show();
	x --;
	x.show();
}

