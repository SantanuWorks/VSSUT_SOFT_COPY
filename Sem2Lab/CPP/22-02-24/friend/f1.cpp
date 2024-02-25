// Write a program to access the private data member using non-member function using frind function.
#include <iostream>
using namespace std;

class ac{
	private:
	char name[20];
	int accno;
	float bal;
	public:
	void getdata(){
		cout << "Enter name: ";
		cin >> name;
		cout << "\nEnter account no: ";
		cin >> accno;
		cout << "\nEnter balance: ";
		cin >> bal;
	}
	friend void showbal(ac);
};

void showbal(ac x){
	cout << "\nBalance of account no " << x.accno << " is " << x.bal;
}

int main(){
	ac a;
	a.getdata();
	showbal(a);
}
