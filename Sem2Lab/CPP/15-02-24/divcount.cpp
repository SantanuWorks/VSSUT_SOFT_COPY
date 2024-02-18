// Write a c++ program to count numbers between 1 and 100 which are not divisible by 2, 3, and 5.

#include <iostream>
using namespace std;

class DivNum{
	public:
	static int ctr;
	void countnum();
};

void DivNum::countnum(){
	for(int i = 1; i <= 100; i ++){
		if( !( i%2==0 && i%3==0 && i%5==0 ) ) ctr ++;
	}
	cout << "Count of numbers which are not divisible by 2, 3 and 5: " << DivNum::ctr;
}

int DivNum::ctr = 0;

int main(){
	DivNum d;
	d.countnum();
}
