#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(int a, int b){
	return a>b;
}

int main(){
	int arr[] = {-2,3,4,-1,5,-12,6,1,3};
	int n = sizeof(arr) / sizeof(int);

	vector <int> vec = {-2,3,4,-1,5,-12,6,1,3};

	sort(arr, arr+n); //sorting of simple array
	// reverse(arr, arr+n); //reversing the simpel array

	sort(arr, arr+n, compare); // we can pass compare function as an argument and modify the checking condition

	sort(vec.begin(), vec.end()); //sorting of vector

	for(int i=0; i<n; i++) 
		cout<<arr[i]<<" ";

	cout<<"\n";

	for(int i=0; i<n; i++)
		cout<<vec[i]<<" ";

	return 0;
}