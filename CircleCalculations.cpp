#include <iostream>
using namespace std;

float square(float x){
	
	return x * x;
	
}



int main()
{
	const float PI = 3.142;
	float radius;
	cout << "What is the radius?" << endl;
	cin >> radius;
	float Area = PI * square(radius);
    cout << "The area of the circle is " << Area << endl;
	float Circumference = 2 * PI * radius;
	cout << "The circumference of the circle is " << Circumference << endl;
    //cout << myName;
	return 0;
}

