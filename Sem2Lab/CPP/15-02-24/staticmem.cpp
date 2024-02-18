#include <iostream>
using namespace std;

class num{
	private:
		static int c;
	public:
		static void count(){
			c ++;
		}
		static void display(){
			cout << "c = " << c << endl;
		}
};

int num::c = 0;

int main(){
	num::display();
	num::count();
	num::count();
	num::display();
	return 0;
}
