#include <iostream>
#include <vector>
using namespace std;

int lowerbound(vector <int> arr, int val){

	int size = arr.size();
	if(val < arr[0]){
		return -1;
	}

	for(int i =0; i<size-1; i++){
		if(val == arr[i]){
			return val;
		}

		if((val>arr[i]) && (val<arr[i+1])){
			return arr[i];
		}
	}
	return arr[size-1];
}
//there is another solution of the lower bound problem based on binary search. DO check it out.


int main(){

	vector <int> arr = {1, 2, 3, 4, 6};
	int val = 6;

	cout<<lowerbound(arr, val);
	return 0;
}

//passed