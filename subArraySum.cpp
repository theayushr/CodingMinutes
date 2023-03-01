#include <iostream>
using namespace std;

//this approach is brute forces approach
// time complexity - o(n^3) loop ke andar loop ke andar loop

int bruteSum(int arr[], int n){
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

//next approach is prefix sum approach
// the complexity of prefixSum is o(n^2) as there is loop inside loop
int prefixSum(int arr[], int n){

	int prefix[n] ={0};
	prefix[0] = arr[0];
	for(int i=1; i<n; i++){
		prefix[i] = prefix[i-1] + arr[i];
	}

	int largestsum = 0;
	int currentsum = 0;

	for(int i=0; i<n; i++){
		for(int j=i; j<n; j++){
			currentsum =  (i>0)? prefix[j] - prefix[i-1] : prefix[j];
			largestsum = max(largestsum, currentsum);
		}
	}
	return largestsum;
}

//

int main(){
	int arr[] = {-10,20,-30,80,-40,50,40,-60};
	int n= sizeof(arr)/sizeof(int);

	cout<<bruteSum(arr, n);
	cout<<endl;
	cout<<prefixSum(arr, n);
	return 0;
}