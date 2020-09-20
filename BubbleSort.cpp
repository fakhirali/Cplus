#include <iostream>
using namespace std;

int main(){
	int arr[] = {73,45,2,95,66,67,80,21};
	// Calculating length of the array
	int len = sizeof(arr)/sizeof(arr[0]);
	
	while (len > 1){
		// go through the array
		for (int i = 0; i < len-1; i++){
			//if this value > than the next one
			if (arr[i] > arr[i+1]){
				//swap values
				int temp = arr[i];//temp variable to store value
				arr[i] = arr[i+1];
				arr[i+1] = temp;
			}
		}		
		len --; //decrease len to not check the last pairs again
		//as they are already sorted
	}
	//reset len to print the sorted values
	len = sizeof(arr)/sizeof(arr[0]);
	for (int i = 0; i < len; i++){
		cout << arr[i] << " "; 
	}
	
	return 0;
}

