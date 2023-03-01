#include <iostream>
using namespace std;

void printArray(int array[], int n){

	//int n = sizeof(array) / sizeof(int);
	cout<<"size in function: "<<n<<endl;

	for(int i=0; i<n; i++){
		cout<<array[i]<<endl;
	}

	// this is happening because when we pass the argument normally, only the address get passed not the exact values
	// it is called "PASS BY REFERENCE" - only the address get passes
}

int main(){

	int array[] = {1,2,3,4,5,6,7,8};
	int n = sizeof(array) / sizeof(int);

	cout<<"size in main: "<<n<<endl;

	for(int i=0; i<n; i++){
		cout<<array[i]<<endl;
	}

	printArray(array, n);

	return 0;
}