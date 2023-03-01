//this template for testing the small sections of the code and then use them in the main frame.
//I can omite the code many times and use the same template again and again for various use. 
//this does make sense. 

#include <iostream>
#include <math.h>
using namespace std;

int main(){

	int num = 121;

	int sum = 0;

	while(num!=0){
		int ele = num % 10;
		sum = sum + pow(ele, 3);
		num =num / 10;
	}

	cout<<sum;


	return 0;
}