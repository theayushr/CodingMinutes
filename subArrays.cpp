#include <iostream>
using namespace std;


void allSubArrays(int arr[], int n){

	for(int i=0; i<n; i++){
		for(int j=i; j<n; j++){
			for(int k=i; k<=j; k++){
				cout<<arr[k]<<",";
			}
			cout<<endl;
		}
	}
}

//print the sum of all sub arrays and find the largest sum

//brute force approach o(n^3)
int subArraySum(int arr[], int n){
	int largestsum =0;
	for(int i=0; i<n; i++){
		for(int j=i; j<n; j++){
			int currentsum =0;
			for(int k=i; k<=j; k++){
				currentsum+= arr[k];
			}	
			largestsum = max(currentsum, largestsum);
		}
	}
	return largestsum;
}

int main(){

	int arr[] = {-10,20,-30,80,-40,50,40,-60};
	int n= sizeof(arr)/sizeof(int);

	//allSubArrays(arr, n);
	cout<<subArraySum(arr, n);
	return 0;
}