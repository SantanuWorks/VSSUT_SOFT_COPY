#include <iostream>
using namespace std;

class Timee{
	float hr;
	float min;
	float sec;
	public:
	void getdata();
	void display();
};

void Timee::getdata(){
	cout << "Enter time in hour: ";
	cin >> hr;
	min = 60 * hr;
	sec = 60 * min;
}

void Timee::display(){
	cout << "Time in minutes: " << min;
	cout << "\nTime in seconds: " << sec;
}

int main(){
	Timee t;
	t.getdata();
	cout << endl;
	t.display();
}
