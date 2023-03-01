#include <iostream>
#include <vector>
using namespace std;


//insertion sort is like cards game. You choose a card and put it to its place. Same goes here.

vector <int> insertionsort(vector <int> arr){

	for(int i=1; i<arr.size(); i++){

		int current = arr[i];
		int prev = i-1;

		//loop to find the currect index where the current should be inserted
		while(prev >=0 and arr[prev] > current){
			arr[prev + 1] = arr[prev];
			prev = prev-1; 
		}
		arr[prev+1] = current;
	}
	return arr;
}

int main(){
	vector <int> arr = {-2,3,4,-1,5,-12,6,1,3};
	//vector <int> arr = {-1,0,1,2,3,4,5,6,7,8}; 	

	arr = insertionsort(arr);

	for(int i=0; i<arr.size(); i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}