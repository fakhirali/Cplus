//Program 
#include <iostream>
using namespace std;


float LoadingDose(float DesiredConc, float Weight){
	
	float Vol = Weight * 0.56;
	
	return DesiredConc * Vol;
}



int main(){
	
	float Conc;
	float Weight;
	
	cout << "Enter the desired concentration in mg/L" << endl;
	cin >> Conc;
	
	cout << "Enter the weight in kg" << endl;
	cin >> Weight;
	
	cout << "The Loading Dose is " << LoadingDose(Conc,Weight) << " mg " << endl;
	return 0;
}