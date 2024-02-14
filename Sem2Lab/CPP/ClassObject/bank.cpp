#include <iostream>
using namespace std;

class Bank{
	string name;
	string type;
	long acno;
	float bal;
	
	public:
	void initial(){
		name = "Santanu Pradhan";
		type = "Current";
		acno = 12345678;
		bal = 1255.5;
	}
	
	void deposit(float b){
		bal += b;
		cout << "Amount " << b << " is deposited on your account.";
	}
	
	void withdraw(float b){
		if( b > bal ) cout << "Insufficient balance.";
		else{
			bal -= b;
			cout << "Amount " << b << " is withdrawn from your account.";	
		}
	}
	
	void inquiry(){
		cout << "\nAccount Holder: " << name;
		cout << "\nAccount No: " << acno;
		cout << "\nAccount Type: " << type;
		cout << "\nAvaiable Balance: " << bal;
	}
	
};

int main(){
	Bank b;
	b.initial();
	
	int op = 0;
	float bal;
	
	while( op != 4 ){
		cout << "1. Balance inquiry\n2. Deposit\n3. Withdraw\n4. Exit\n";
		cout << "Enter option: "; cin >> op;
		switch(op){
			case 1: b.inquiry(); break;
			case 2: cout << "\nEnter amount: ";
					cin >> bal;
					b.deposit(bal); break;
			case 3: cout << "\nEnter amount: ";
					cin >> bal;
					b.withdraw(bal); break;
			case 4: cout << "\nSession ended."; break;
		}
		cout << "\n\n";
	}
}
