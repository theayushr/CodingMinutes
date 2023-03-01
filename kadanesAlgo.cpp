#include <iostream>
using namespace std;

int kadane(int arr[], int n){
	int currentsum = 0;
	int largestsum = 0;

	for(int i=0; i<n; i++){
		currentsum = max(currentsum + arr[i], 0);
		largestsum = max(currentsum, largestsum);
	}
	return largestsum;
}

//time complexity is o(n) and is the best way of finding the sub array sum

int main(){
	int arr[] = {-2,3,4,-1,5,-12,6,1,3};
	int n= sizeof(arr)/sizeof(int);

	cout<<kadane(arr, n);


	return 0;
}