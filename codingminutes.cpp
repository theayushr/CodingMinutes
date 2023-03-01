#include <iostream>
#include <vector>
using namespace std;

void increase(vector <int> &arr){
	arr.push_back(2);
	arr.push_back(3);
}

int main(){

	vector <int> arr;

	increase(arr);

	for(int i=0; i<arr.size(); i++){
		cout<<arr[i]<<endl;
	}
	
	return 0;
}