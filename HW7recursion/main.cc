#include <iostream>
using namespace std;


void recursion(int, int);

int main(){
	
	int n = 0;
	cin >> n;
	int start = 1;
	recursion(start,n);
	return 0;	
}

void recursion(int start, int n){
	
	char asterisk = '*';
	
	for(int i = 1; i <= start; i++){
		cout << asterisk << " ";
	}

	cout << endl;
	
	if(start < n){
		recursion(start+1,n);
	}

	for(int i = 1; i <= start; i++){
		cout << asterisk << " ";
	}
	--start;
	cout << endl;
}

