#include <iostream>
#include <string.h>
using namespace std;


bool ispalindrome(string str){

	int len = str.size();
	for(int i=0; i<len/2; i++){

		if(str[i] != str[len-i-1]){
			return false;
		}
	}
	return true;
}

int main(){
	string str;
	cin>>str;

	if(ispalindrome(str)){
		cout<<"true\n";
	}
	else {
		cout<<"false\n";
	}
	
	return 0;
}