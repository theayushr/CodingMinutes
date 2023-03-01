#include <iostream>
#include <vector>
using namespace std;

vector <int> bubblesort(vector <int> arr){
	int size = arr.size();
	
	for(int i=0; i<size-1; i++){
		bool swaped = false;
		for(int j=0; j<size-i -1; j++){
			if(arr[j] > arr[j+1]){
				swap(arr[j], arr[j+1]);
				swaped = true;
			}
		}

		if(swaped == false){
			break;
		}
	}
	return arr;
}

//the complexity of bubble sort is o(n^2), we can make sorting faster by using different methods

int main(){
	vector <int> arr1 = {-2,3,4,-1,5,-12,6,1,3};
	vector <int> arr = {-1,0,1,2,3,4,5,6,7,8}; 	

	arr = bubblesort(arr);

	for(int i=0; i<arr.size(); i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}