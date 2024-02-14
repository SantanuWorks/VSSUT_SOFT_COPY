#include <iostream>
#include <string>
#define N 50
using namespace std;

struct table
{
	char symbol;
	int val;
};

string x, y;
int m, n;
int v;
char s;
string lstr = "";


struct table c[N][N];

void lcs(int i, int j){
	if( i == 0 || j == 0 ){
		v = 0; s = ' ';	
	} 
	else{
		if( y[i-1] == x[j-1] ){
			v = (c[i-1][j-1].val) + 1; 
			s = '\\';
		}
		else{
			if( c[i-1][j].val >= c[i][j-1].val ){
				v = c[i-1][j].val; s = '^';
			}
			else{
				v = c[i][j-1].val; s = '<';
			}
		}
	}
	c[i][j].val = v;
	c[i][j].symbol = s;
}

int main(){
	int i, j;
	
	cout << "Enter first string: "; cin >> x;
	cout << "\nEnter second string: "; cin >> y;
	
	m = x.length(); n = y.length();
	
	for(i = 0; i <= n; i ++){
		for(j = 0; j <= m; j ++){
			lcs(i, j);
		}
	}
	
	cout << endl;
	
	for(i = 0; i <= n; i ++){
		for(j = 0; j <= m; j ++){
			cout << c[i][j].symbol << " " << c[i][j].val << "\t";
		}
		cout << "\n\n";
	}
	
	cout << "\nLength: " << c[n][m].val;
	
	i = n, j = m;
	
	while( i >= 0 && j >= 0 ){
		if( c[i][j].symbol == '\\' ){
			i --; j --;
			lstr = x[j] + lstr;
		}
		else if( c[i][j].symbol == '<' ){
			j --;
		}
		else{
			i --;
		}
	}
	
	cout << "\n\nLCS = " << lstr;
}
