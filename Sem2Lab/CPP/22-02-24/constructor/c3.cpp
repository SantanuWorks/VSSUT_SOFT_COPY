// Write a program to create constructor and pass the arguments to the constructor.
#include <iostream>
using namespace std;

class num{
	private:
	int a, b, c;
	public:
	num(int i, int j, int k){
		a = i;
		b = j;
		c = k;
	}
	void show(){
		cout << "\na = " << a << "\nb = " << b << "\nc = " << c;
	}
};

int main(){
	num x = num(2, 5, 8);
	x.show();
}
