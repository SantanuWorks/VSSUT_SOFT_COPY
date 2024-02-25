// Write a program to exchange values between two classes using friend function.
#include <iostream>
using namespace std;

class second;
class first{
	private:
	int j;
	public:
	void input(){
		cout << "\nEnter value of j: ";
		cin >> j;
	}
	void show(){
		cout << "\nValue of j: " << j;
	}
	friend void exchange(first &, second &);
};

class second{
	private:
	int i;
	public:
	void input(){
		cout << "\nEnter value of i: ";
		cin >> i;
	}
	void show(){
		cout << "\nValue of i: " << i;
	}
	friend void exchange(first &, second &);
};

void exchange(first &x, second &y){
	int temp = x.j;
	x.j = y.i;
	y.i = temp;
}

int main(){
	first f;
	second s;
	f.input();
	s.input();
	f.show();
	s.show();
	exchange(f, s);
	f.show();
	s.show();
}
