#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


vector <int> countingsort(vector <int> arr){
	int n = arr.size();

	//largeset element
	int largest = -1;
	for(int i=0; i<n; i++){
		largest = max(arr[i], largest);
	}

	//create a counting/frequecy array vector
	vector <int> freq(largest+1, 0);

	//update the frequecy array
	for(int i =0; i<n; i++){
		freq[arr[i]]++;
	}

	//put back elements from frequency array to original array
	int j=0;

	for(int i=0; i<=largest; i++){
		while(freq[i] > 0){
			arr[j] = i;
			freq[i]--; 
			j++;
		}
	}

	return arr;
}

int main(){
	vector <int> arr = {-2,3,4,-1,5,-12,6,1,3};
	arr = countingsort(arr);

	for(int i=0; i<arr.size(); i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}