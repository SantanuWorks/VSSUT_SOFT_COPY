// Write a program to show multilevel inheritance between two classes.

#include <iostream>
using namespace std;

class A{
	protected:
	char name[15];
	int age;
};

class B: public A{
	protected:
	float height;
};

class C: public B{
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
	C c1;
	c1.getdata();
	c1.showdata();
	return 0;
}
