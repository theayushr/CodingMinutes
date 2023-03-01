#include <iostream>
using namespace std;


// there are three things in the picture; passby value, passby reference and passby pointers
// understand the differences between the three


void sumtonum(int num){
	int sum = 0;
	for(int i=1; i<=num; i++){
		sum = sum + i;
	}

	cout<<sum<<endl;
	num = num +1;
	cout<<"Sum up to "<<num<<"is: "<< sum+1<<endl;
}

void sumtonumref(int &num){
	int sum = 0;

	for(int i=1; i<=num; i++){
		sum = sum + i;
	}

	cout<<sum<<endl;
	num = num +1;
	cout<<"Sum up to "<<num<<"is: "<< sum+1<<endl;

}

int main(){
	int num;
	cout<<"NUMBER :";
	cin>>num;

	sumtonum(num);
	cout<<"But num is: "<<num<<endl;

	sumtonumref(num);
	cout<<"But num is: "<<num;




}