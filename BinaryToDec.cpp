#include <iostream>
#include <cmath>
using namespace std;


int main(){
	int BinaryNum;
	int DecimalNum = 0;
	int Digit;
	int DigitPlace = 0;
	cout << "Enter a 8 bit Binary number" << endl;
	cin >> BinaryNum;
	
	while (BinaryNum){
		Digit = BinaryNum % 10;
		if(Digit){
			
			DecimalNum += pow(2, DigitPlace);
		}
		
		BinaryNum /= 10;
		DigitPlace++;		
	}
	cout << "The decimal equivalent is " << endl;
	
	cout << DecimalNum << endl;
	
}