#include <iostream>
#include <math.h>
using namespace std;

void binarytodec(int n){

	int dec =0;
	int power =0;

	while(n>0){
		int ld = n%10;
		dec = dec + ld * pow(2, power) ;
		power++;
		n/=10;
	}
	cout<<dec<<endl;
}

int main(){
	int n; 
	cout<<"NUMBER: ";  
	cin>>n;

	int ans =0;
	int power =1;

	binarytodec(n);

	while(n>0){
		int lastdigit = n%10;
		ans += lastdigit*power;
		power*=2;
		n/=10;
	}
	cout<<ans<<endl;
	return 0;
}