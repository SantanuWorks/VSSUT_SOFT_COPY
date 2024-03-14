// Write a program to show hierarchical inheritance between two classes.

#include <iostream>
using namespace std;

class Person{
	protected:
	string name;
	long phoneno;
	void getdata(){
		cout << "Enter name: ";
		cin >> name;
		cout << "Enter phone no: ";
		cin >> phoneno;
	}
};

class Student: public Person{
	protected:
	int roll;
	string course;
	public:
	void getstudentdata(){
		cout << "Enter Student Details:\n";
		getdata();
		cout << "Enter roll: ";
		cin >> roll;
		cout << "Enter course name: ";
		cin >> course;
	}
	void showstudentdata(){
		cout << "\nStudent Details:";
		cout << "\nName: " << name;
		cout << "\nPhone no: " << phoneno;
		cout << "\nRoll no: " << roll;
		cout << "\nCourse: " << course;
	}
};

class Teacher: public Person{
	protected:
	string deptname;
	string qlf;
	public:
	void getteacherdata(){
		cout << "\n\nEnter Teacher Details:\n";
		getdata();
		cout << "Enter dept name: ";
		cin >> deptname;
		cout << "Enter qualification: ";
		cin >> qlf;
	}
	void showteacherdata(){
		cout << "\nTeacher Details:";
		cout << "\nName: " << name;
		cout << "\nPhone no: " << phoneno;
		cout << "\nDept Name: " << deptname;
		cout << "\nQualification: " << qlf;
	}
};

int main(){
	Student s1;
	Teacher t1;
	s1.getstudentdata();
	s1.showstudentdata();
	t1.getteacherdata();
	t1.showteacherdata();
	return 0;
}
