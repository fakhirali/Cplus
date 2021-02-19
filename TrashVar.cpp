#include <iostream>
#include <string>
using namespace std;

int main(){
	
	int x;
	cout << "Enter the number of Trash Values you want" << endl;
	cin >> x;
	
	int a[x];
	cout << a << endl;
	for (int i = 0; i < x; i++) {

		cout << a[i] << endl;
		
	}

	return 0;
}

