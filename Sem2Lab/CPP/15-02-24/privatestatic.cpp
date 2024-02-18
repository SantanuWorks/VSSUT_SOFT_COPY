#include <iostream>
using namespace std;

class num{
	static int c;
	static void count(){
		c ++;
	}
	public:
	void display(){
		count();
		cout << "c = " << c << endl;
	}
};

int num::c = 0;

int main(){
	num x;
	x.display();
	x.display();
	return 0;
}
