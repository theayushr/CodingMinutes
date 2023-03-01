#include <iostream>
using namespace std;


/*
the complexity of binary search is o(logN) and you can check that by the logic
that's why it is fast and efficient
all we need is the sorted array and you need to apply the binary search
we called that seach space is monotonic, that means either you have ascending order or descending order
*/

int binarysearch(int arr[], int n, int key){
	//implementation of binary search

	int start = 0;
	int end = n-1;

	while(start <=end){

		int mid = (start + end)/2;

		if(arr[mid] == key){
			return mid;
		}
		else if(arr[mid] >key){
			end = mid -1;
		}
		else{
			start = mid +1;
		}
	}
	return -1;
}

int main(){

	int arr[]= {10,20,30,40,45,60,70,80};
	int n= sizeof(arr)/ sizeof(int);

	int key;
	cin>>key;

	int index = binarysearch(arr, n,key);

	if(index !=-1){
		cout<<key<<" is present at index "<<index<<endl;
	} else{
		cout<<key<<" is not found"<<endl;
	}
	return 0;
}