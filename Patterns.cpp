#include <iostream>
#include <iomanip>
#include <string>

using namespace std;


int main(){
	int choice;
	cout << "enter 1 to Draw a half pyramid pattern\nenter 2 to Draw an X pattern\nenter 3 to Draw full pyramid" << endl;
	cin >> choice;
	char x;
	if (choice == 1){
		
		cout << "enter a charachter" << endl;
		cin >> x;

		
		cout << setfill(x) << setw(1) << x << endl;
		cout << setfill(x) << setw(2) << x << endl;
		cout << setfill(x) << setw(3) << x << endl;
		cout << setfill(x) << setw(4) << x << endl;
		cout << setfill(x) << setw(5) << x << endl;
	}else if(choice == 2){
		cout << "Enter a string\n";
		string a;
		cin >> a;
		
		int len = a.length() + 1;
		int margin = 0;
		
		if (len > 5){
			margin = a.length() - 4;
		}
		cout << setw(len + 0) <<a << setw((len * 3)-margin) << a << endl;
		cout << setw(len + 1) <<a << setw((len * 3)-2-margin) << a << setw(1) << endl;
		cout << setw(len + 2) <<a << setw((len * 3)-4-margin) << a << setw(2) << endl;
		cout << setw(len + 3) <<a << setw((len * 3)-6-margin) << a << setw(3) << endl;
		cout << setw(len + 4) <<a << setw((len * 3)-8-margin) << a << setw(4) << endl;
		cout << setw(len + 5) <<a << setw((len * 3)-10-margin) << a << setw(5) << endl;
		cout << setw(len + 6) <<a << setw((len * 3)-12-margin) << a << setw(6) << endl;
		
		cout << setw(len + 4) <<a << setw((len * 3)-8-margin) << a << setw(4) << endl;
		cout << setw(len + 3) <<a << setw((len * 3)-6-margin) << a << setw(3) << endl;
		cout << setw(len + 2) <<a << setw((len * 3)-4-margin) << a << setw(2) << endl;
		cout << setw(len + 1) <<a << setw((len * 3)-2-margin) << a << setw(1) << endl;
		cout << setw(len + 0) <<a << setw((len * 3)-margin) << a << endl;
	
	}else if(choice == 3){
		cout << "Enter a charachter\n";
		
		cin >> x;
		cout << setw(9/2 + 1) << x << endl;
		
		cout << setw((9/2));
		cout << x;
		cout << x;
		cout << x;
		cout << endl;
		
		cout << setw((9/2) - 1);
		cout << x;
		cout << x;
		cout << x;
		cout << x;
		cout << x;
		cout << endl;
		
		cout << setw((9/2)-2);
		cout << x;
		cout << x;
		cout << x;
		cout << x;
		cout << x;
		cout << x;
		cout << x;
		cout << endl;
		
		cout << setw((9/2) - 3);
		cout << x;
		cout << x;
		cout << x;
		cout << x;
		cout << x;
		cout << x;
		cout << x;
		cout << x;
		cout << x;
		cout << endl;
		
		cout << setw((9/2) -2);
		cout << x;
		cout << x;
		cout << x;
		cout << x;
		cout << x;
		cout << x;
		cout << x;
		cout << endl;
		
			
		cout << setw((9/2) -1);
		cout << x;
		cout << x;
		cout << x;
		cout << x;
		cout << x;
		cout << endl;
		
		cout << setw((9/2));
		cout << x;
		cout << x;
		cout << x;
		cout << endl;
		
		cout << setw(9/2 + 1) << x << endl;
	
	}
	
	return 0;
}