#include <bits/stdc++.h>
using namespace std;

struct node{
	int f;
	char c;
	char b;
	node* left;
	node* right;
};

node* createnode(char c, int f){
	struct node* newnode = (struct node*) malloc(sizeof(struct node));
	newnode->c = c;
	newnode->f = f;
	newnode->left = NULL;
	newnode->right = NULL;
	return newnode;
}

struct byf{
    bool operator()(node* a, node* b){ return a->f > b->f; }
};

void huffmanAlgo(node* r, char b = '\0'){
	if( r == NULL ) return;
	r->b = b;
	cout << "(" << r->c << ", " << r->f << ") ";
	huffmanAlgo(r->left, '0');
	huffmanAlgo(r->right, '1');
}

void printHuffCodes(node* r, string code) 
{ 
    if (r == NULL) return; 
    code += r->b; 
    if ( r->c != ' ' ) cout << r->c << " : " << code << endl;
    else
    { 
        printHuffCodes(r->left, code); 
        printHuffCodes(r->right, code); 
    } 
}

int main(){
	int n; node *root, *cnod;
	
	cout << "Enter no of unique symbols: "; cin >> n;
	
	priority_queue<node*, vector<node*>, byf> arr;
	
	for(int i = 0; i < n; i ++){
		char c;
		int f;
		cout << "Enter symbol and frequency: ";
		cin >> c >> f;
		arr.push(createnode(c, f));
		fflush(stdin);
	}
	
	while(arr.size() != 1){
		root = arr.top(); arr.pop();
		cnod = arr.top(); arr.pop();
		char c = ' ';
		int f = root->f + cnod->f;
		node* newnode = createnode(c, f);
		if( root->f > cnod->f ) newnode->left = cnod, newnode->right = root;
		else newnode->left = root, newnode->right = cnod;
		root = newnode;
		arr.push(root);
	}
	
	cout << "\nHuffman Tree: ";
	huffmanAlgo(root);

	cout << "\n\nHuffman Codes:\n";
	printHuffCodes(root, "");
}
