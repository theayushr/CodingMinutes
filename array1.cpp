#include <iostream>
using namespace std;

int main(){

	int array[5] = {5,3,4,1,2}; //this is how we declare array in the cpp

	string fruits[5]= {"apple", "mango", "guava", "banana", "papaya"};

	int size = sizeof(array) / sizeof(int);
	//here sizeof(array) = 5*4 where 4 is the size of int. So we divide sizeof(array) by sizeof int to get the number of elements


	cout<<size<<endl;

	for(int i=0; i<5; i++){
		cout<<array[i]<<" "<<fruits[i]<<endl;
	}

	return 0;
}
