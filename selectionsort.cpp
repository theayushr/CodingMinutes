#include <iostream>
#include <vector>
using namespace std;

//we find the minimum element and put it in the front, that way making it a sorted
vector <int> selectionsort(vector <int> arr){
	
	for(int pos = 0; pos<=arr.size()-2; pos++){

		int current = arr[pos];
		int min_pos = pos;

		//loop to find least element
		for(int j = pos; j<arr.size(); j++){
			if(arr[j] < arr[min_pos]){
				min_pos = j;
			}
		}

		swap(arr[min_pos], arr[pos]); 
	}

	return arr;
}

int main(){

	vector <int> arr = {-2,3,4,-1,5,-12,6,1,3};
	arr = selectionsort(arr);

	for(int i=0; i<arr.size(); i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}