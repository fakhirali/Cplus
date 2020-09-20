#include <iostream>
#include <string>
using namespace std;

float square(float x){
	
	return x * x;
	
}



int main(){
	
	float Weight;
	float Height;
	string Type;
	
	cout << "How much do you weigh in kg?" << endl;
	cin >> Weight;
	cout << "Your height in meters?" << endl;
	cin >> Height;
	float BMI = Weight / square(Height);
	cout << "Your Body Mass Index is " << BMI << endl;
	
	if (BMI > 25){
		Type = "OverWeight";
	}
	else if (BMI > 18.5){
		Type = "Normal";
	}else{
		Type = "UnderWeight";
	}
	cout << "You are " << Type << endl;
	
	return 0;
	
	
	
}