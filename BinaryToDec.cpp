#include <iostream>
#include <cmath>
using namespace std;


int main(){
	int BinaryNum;
	int DecimalNum = 0;
	
	cout << "Enter a 8 bit Binary number" << endl;
	cin >> BinaryNum;
	
	if(BinaryNum % 10){
		DecimalNum += pow(2, 0);
	}
	
	BinaryNum /= 10;
	if(BinaryNum % 10){
		DecimalNum += pow(2, 1);
		
	}
	
	BinaryNum /= 10;
	if(BinaryNum % 10){
		
		DecimalNum += pow(2, 2);
		
	}
	
	BinaryNum /= 10;
	if(BinaryNum % 10){
		
		DecimalNum += pow(2, 3);
		
	}
	
	BinaryNum /= 10;
	if(BinaryNum % 10){
		
		DecimalNum += pow(2, 4);
		
	}
	
	BinaryNum /= 10;
	if(BinaryNum % 10){
		
		DecimalNum += pow(2, 5);
		
	}
	
	BinaryNum /= 10;
	if(BinaryNum % 10){
		DecimalNum += pow(2, 6);
	}
	
	BinaryNum /= 10;
	if(BinaryNum % 10){
		
		DecimalNum += pow(2, 7);
	}
	
	
	cout << "The decimal equivalent is " << endl;
	
	cout << DecimalNum << endl;
	return 0;
}