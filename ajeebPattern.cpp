#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// 1
// 2 4
// 3 5 7
// 6 8 10 12
// 9 11 13 15 17

//make a start function to give the starting values;

int main(){

	vector <int> upto(16,0);
	for(int row =1; row<=5; row++){
		
		int ele = start(upto);
		for(int col =1; col<=row; col++){
			cout<<ele<<" ";
			ele+=2;
		}
		cout<<endl;
	}
	return 0;
}