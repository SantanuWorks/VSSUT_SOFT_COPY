// Write a c++ program to declare static object and display its content.

#include <iostream>
using namespace std;

class num{
	private:
		int c;
		int k;
	public:
		void plus(){
			c += 2;
			k += 3;
		}
		void show(){
			cout << "c = " << c << endl;
			cout << "k = " << k;
		}
};

int main(){
	static num x;
	x.plus();
	x.show();
	return 0;
}
