#include <iostream>
#include <iomanip>
#include <string>
using namespace std;




int main(){
 	char x;
	cin >> x;
	
	
	// cout << setfill(x) << setw(1) << x << endl;
	// cout << setfill(x) << setw(2) << x << endl;
	// cout << setfill(x) << setw(3) << x << endl;
	// cout << setfill(x) << setw(4) << x << endl;
	// cout << setfill(x) << setw(5) << x << endl;

	// string a;
	// cin >> a;
	
	// cout << setw(a.length() + 0) <<a << setw(a.length() * 3) << a << endl;
	// cout << setw(a.length() + 1) <<a << setw((a.length() * 3)-2) << a << setw(1) << endl;
	// cout << setw(a.length() + 2) <<a << setw((a.length() * 3)-4) << a << setw(2) << endl;
	// cout << setw(a.length() + 3) <<a << setw((a.length() * 3)-6) << a << setw(3) << endl;
	// cout << setw(a.length() + 4) <<a << setw((a.length() * 3)-8) << a << setw(4) << endl;
	// cout << setw(a.length() + 5) <<a << setw((a.length() * 3)-10) << a << setw(5) << endl;
	// cout << setw(a.length() + 6) <<a << setw((a.length() * 3)-12) << a << setw(6) << endl;
	
	// cout << setw(a.length() + 4) <<a << setw((a.length() * 3)-8) << a << setw(4) << endl;
	// cout << setw(a.length() + 3) <<a << setw((a.length() * 3)-6) << a << setw(3) << endl;
	// cout << setw(a.length() + 2) <<a << setw((a.length() * 3)-4) << a << setw(2) << endl;
	// cout << setw(a.length() + 1) <<a << setw((a.length() * 3)-2) << a << setw(1) << endl;
	// cout << setw(a.length() + 0) <<a << setw(a.length() * 3) << a << endl;
	
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
	return 0;
}