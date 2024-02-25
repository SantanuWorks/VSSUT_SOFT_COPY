// Write a program to declare a friend function in two class and calculate the sum of integers of both class using friend function.
#include <iostream>
using namespace std;

class first;
class second{
	private:
	int s;
	public:
	void getdata(){
		cout << "Enter value of s: ";
		cin >> s;
	}
	friend void sum(second, first);
};

class first{
	private:
	int f;
	public:
	void getdata(){
		cout << "Enter value of f: ";
		cin >> f;
	}
	friend void sum(second, first);
};

void sum(second d, first t){
	cout << "Sum of two numbers is " << (d.s + t.f); 
}

int main(){
	first x;
	second y;
	x.getdata();
	y.getdata();
	sum(y, x);
}
