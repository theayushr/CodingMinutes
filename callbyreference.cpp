#include <iostream>
using namespace std;

void reference(int &a){
	a++;
}

void value(int b){
	b++;
}

int main(){
	int a=3, b=89;

	reference(a);
	value (b);

	cout<<a<<"  "<<b;
	return 0;
}