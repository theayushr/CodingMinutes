#include <iostream>
#include <vector>
using namespace std;

vector <int> krotate (vector <int> arr, int k){

	int size = arr.size();
	k %= size;

	vector <int> rotated;

	for(int i= size-k; i<size; i++){
		rotated.push_back(arr[i]);
	}

	for(int i=0; i<size -k; i++){
		rotated.push_back(arr[i]);
	}

	return rotated;
}
// see the complexity of this function is o(n). It's not that bad but there are some better way of solving the problem as well.

int main(){
	vector <int> arr = {1, 3, 5, 7, 9};
	int k = 2;

	vector <int> sol = krotate(arr, k);

	for(int i=0; i<sol.size(); i++){
		cout<<sol[i]<<" ";
	}
}