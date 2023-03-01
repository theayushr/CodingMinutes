#include <iostream>
#include <math.h>
using namespace std;

int digits( int num){
	int d = 0;
	while(num!=0){
		d++;
		num = num/10;
	}
	return d;
}

bool naricissistic(int num, int digit){
	int sum =0;
	int check = num;

	while(num!=0){
		int ele = num % 10;
		sum = sum + pow(ele, digit);
		num =num / 10;
	}

	if(sum == check){
		return 1;
	}
	else{
		return 0;
	}

}

int main(){

	int num;
	cout<<"NUMBER : ";
	cin>>num;

	int digit = digits(num);

	if(naricissistic(num, digit)){
		cout<<num<<" is a Naricissistic Number.";
	}
	else{
		cout<<num<<" is not a Naricissistic Number.";
	}
	return 0;
}