// Write a program to show hybrid inheritance between two classes.

#include <iostream>
using namespace std;

class Location{
	protected:
	string ad;
	int pin;
	public:
	void getloc(){
		cout << "Enter Location Details:\n";
		cout << "Enter address: ";
		cin >> ad;
		cout << "Enter pincode: ";
		cin >> pin;
	}
};

class Player{
	protected:
	string name;
	char gender;
	public:
	void getpl(){
		cout << "Enter Player Details:\n";
		cout << "Enter name: ";
		cin >> name;
		cout << "Enter gender: ";
		cin >> gender;
	}
};

class Physique: public Player{
	protected:
	float h;
	float w;
	public:
	void getplph(){
		cout << "Enter Player Physique Details:\n";
		cout << "Enter height: ";
		cin >> h;
		cout << "Enter weight: ";
		cin >> w;
	}
};

class Game: public Location, public Physique{
	string gamename;
	public:
	void getgm(){
		getloc();
		getpl();
		getplph();
		cout << "Enter game name: ";
		cin >> gamename;
	}
	void showdata(){
		cout << "\nGame Details:\n";
		cout << "Game Name: " << gamename;
		cout << "\nGame Location: " << ad << ", " << pin;
		cout << "\nPlayer Name: " << name;
		cout << "\nPlayer Gender: " << gender;
		cout << "\nPlayer Height: " << h;
		cout << "\nPlayer Weight: " << w;
	}
};

int main(){
	Game g;
	g.getgm();
	g.showdata();
	return 0;
}
