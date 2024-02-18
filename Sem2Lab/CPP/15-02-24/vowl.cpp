// Write a c++ program to count the number of vowels in a string.

#include <iostream>
using namespace std;

class Vowel{
	string str;
	int ctr;
	public:
	void getdata();
	void countvowel();
};

void Vowel::getdata(){
	cout << "Enter string: ";
	cin >> str;
	ctr = 0;
}

void Vowel::countvowel(){
	for(int i = 0; i < str.length(); i ++){
		if( str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' ){
			ctr ++;
		}
	}
	cout << "No of vowels in string: " << ctr;
}

int main(){
	Vowel v;
	v.getdata();
	cout << endl;
	v.countvowel();
}
