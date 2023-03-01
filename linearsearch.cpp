#include <iostream>
using namespace std;

// this is brute force and it's the basic logic that you will think of
// the time complexity of this function is o(n). It directly depends on the size of the array

int linearsearch(int arr[], int key, int size){

	//int index = -1;
	for(int i=0; i<=size; i++){
		if(arr[i] == key){
			return i;
		}
	}
	return -1;
}

int main(){

	int array[10];

	int size;
	cout<<"size: ";
	cin>>size;

	for(int i=0; i<size; i++){
		cin>>array[i];
	}

	int index = linearsearch(array, 23, size);
	cout<<index;

	return 0;
}