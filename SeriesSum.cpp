#include <iostream>
using namespace std;

int main(){
	int a, b, sum, switchSign, x;
	cout << "Enter the number of terms";
	cin >> x;
	a = 5;
	b = 10;
	sum = 0;
	switchSign = -1;
	
	for (int i = 1; i <= x; i++){
	
		if (i % 2 == 0){
			sum = sum + (b * switchSign);
			b = b + 5;
			switchSign = switchSign * -1;
		
		
		}else{
		
			sum = sum + a;
			a = a + 2;
		
		
		}
	
	
	
	
	}
	

	cout << sum;



	return 0;
}
