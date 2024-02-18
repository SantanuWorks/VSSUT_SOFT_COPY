#include <iostream>
using namespace std;

class Student{
	string name;
	int mark;
	public:
	void input();
	void display();
};

void Student::input(){
	cout << "Enter name: ";
	cin >> name;
	cout << "Enter mark: ";
	cin >> mark;
}

void Student::display(){
	cout << "Name: " << name << ", Mark: " << mark << endl;
}

int main(){
	Student s[3];
	for(int i = 0; i < 3; i ++){
		s[i].input();
	}
	cout << "\nStudent Details:\n";
	for(int i = 0; i < 3; i ++){
		s[i].display();
	}
}
