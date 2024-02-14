#include <iostream>
using namespace std;

class A{
	private: 
	int item2;
	void display2(){
		cout << "Private Function:\nItem: " << item2;
	}
	protected: 
	int item3;
	void display3(){
		cout << "Protected Function:\nItem: " << item3;
	}
	public: 
	int item1;
	void display1(){
		cout << "Public Function:\nItem: " << item1;
	}
	void setter(){
		item1 = 10;
		item2 = 20;
		item3 = 30;
	}
	void callall(){
		display1();
		cout << "\n\n";
		display2();
		cout << "\n\n";
		display3();
	}
};

int main(){
	A a;
	a.setter();
	a.callall();	
}
