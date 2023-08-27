#include <stdio.h>
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	
	int i, j;
	
	for(i=1; i<=5; ++i) {
		for(j=1; j<=10;++j){
			cout << (i*j); 
			cout <<"\t";
		}
		cout << "\n";
	}
	
	return 0;
}

