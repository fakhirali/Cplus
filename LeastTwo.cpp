#include <iostream>
using namespace std;

int main(){
	int times;
	cout << "how many numbers do you want to enter bro" << endl;
	cin >> times;
	
	int in;
	int least1;
	int least2;
	
	
	for (int i = 0; i < times; i++){
		cout << "enter your number bro" << endl;
		cin >> in;
				
		if (i == 0){
			least1 = in;
			
		
		}

		if(i ==1){
		
			least2 = in;
			
		
		}
		if (in < least2){
		
			least2 = in;
		}
		
		if (least2 < least1){
		
			int temp = least1;
			
			least1 = least2;
			
			least2 = temp;
		
		}
	
	
	
	}
	cout << "least 1: " << least1 << " least 2: " << least2 << endl; 


return 0;
}
