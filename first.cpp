#include <iostream>
using namespace std;
int main()
{
	const float PI = 3.142;
	float radius;
	cout << "What is the radius?" << endl;
	cin >> radius;
	float Area = PI * radius * radius;
    cout << "The area of the circle is " << Area << endl;
    //cout << myName;
	return 0;
}

