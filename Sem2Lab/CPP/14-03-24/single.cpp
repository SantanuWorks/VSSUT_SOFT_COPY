// Write a program to show single inheritance between two classes.

#include <iostream>
using namespace std;

class A{
	protected:
	char name[15];
	int age;
};

class B: public A{
	float height;
	float weight;
	public:
	void getdata(){
		cout << "Enter name: ";
		cin >> name;
		cout << "Enter age: ";
		cin >> age;
		cout << "Enter height: ";
		cin >> height;
		cout << "Enter weight: ";
		cin >> weight;
	}
	void showdata(){
		cout << "\nPerson Data:\n";
		cout << "Name: " << name << endl;
		cout << "Age: " << age << endl;
		cout << "Height: " << height << endl;
		cout << "Weight: " << weight;
	}
};

int main(){
	B b1;
	b1.getdata();
	b1.showdata();
	return 0;
}
