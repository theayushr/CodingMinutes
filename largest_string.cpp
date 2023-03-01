#include <iostream>
#include <string.h>
using namespace std;

int main(){

	int n;
	cin>>n;

	string sentence[n];
	string largest;
	int largest_len =0;

	for(int i=0; i<n; i++){
		cin>>sentence[i];
		int len = sentence[i].size();
			if(len>largest_len){
				largest_len = len;
				largest = sentence[i];
			}
	}

	cout<<"largest sentence is : "<<largest<<endl;
	return 0;
}