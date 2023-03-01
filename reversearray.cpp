#include <iostream>
using namespace std;

void reversearray(int arr[], int n){

//here we are simply reversing first with the last digit and so on

	int start = 0;
	int end = n-1;

	while(start<end){
		swap(arr[start], arr[end]);
		start+=1;
		end-=1;
	}

	//the time complexity of this program in o(n) as the while loop goes through n/2 times which is direcly
	//proportional to the input
}

int main(){
	int arr[]={1,2,3,4,6,5,6,7,8,9,12};
	int n = sizeof(arr)/ sizeof(int);

	//before reverse
	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;

	reversearray(arr, n);
	//after reverse
	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}