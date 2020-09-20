#include <iostream>
using namespace std;

int main(){
	int arr[] = {73,45,2,95,66,67,80,21};
	int len = sizeof(arr)/sizeof(arr[0]);
	int j, key;
	for (int i = 1; i < len; i++){
		
		key = arr[i];
		j = i - 1;
		
		while(j >= 0 && arr[j] > key){
			arr[j+1] = arr[j];
			j --;
			
			
		}
		arr[j+1] = key;
	}
	
	len = sizeof(arr)/sizeof(arr[0]);
	for (int i = 0; i < len; i++){
		cout << arr[i] << " "; 
	}
	
	return 0;
}