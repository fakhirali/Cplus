#include <iostream>
using namespace std;

int main(){
	
	int Arr[] = {1,2,3,6,5,6,6,9,11,10,10,11};
	int freq[12] = {0};
	for(int i = 0; i< 12; i++){
		for(int j = 0; j < 12; j++){
			if(Arr[j] == Arr[i])
				freq[i]++;
		
		}
		
	}
	int mode;
	int modeFreq = 0;
	for(int i = 0; i< 12; i++){
		if(freq[i] > modeFreq){
			mode = Arr[i];
			modeFreq = freq[i];
		}
		
	}
	cout << mode << endl;
	return 0;
	
}