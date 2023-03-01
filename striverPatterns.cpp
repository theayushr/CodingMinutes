#include <iostream>
using namespace std;

void pattern1(int num){
	for(int i = 1; i<=num; i++){
		for(int j= 1; j<=num; j++){
			cout<<"*";
		}
		cout<<endl;
	}
}

void pattern2(int num){
	for(int i=1; i<=num; i++){
		for(int j=1; j<=i; j++){
			cout<<"*";
		}
		cout<<endl;
	}
}

void pattern3(int num){
	for(int i=1; i<=num; i++){
		for(int j=1; j<=i; j++){
			cout<<j;
		}
		cout<<endl;
	}
}

void pattern4(int num){
	for(int i=1; i<=num; i++){
		for(int j=1; j<=i; j++){
			cout<<i;
		}
		cout<<endl;
	}
}

void pattern5(int num){
	for(int i=num; i>=1; i--){
		for(int j=i; j>=1; j--){
			cout<<"*";
		}
		cout<<endl;
	}
}

void pattern6(int num){
	for(int i=num; i>=1; i--){
		for(int j =1; j<=i; j++){
			cout<<j;
		}
		cout<<endl;
	}
}

void pattern7(int num){
	for(int i=1; i<=num; i++){

		//initial spaces
		for(int j=1; j<=num-i; j++){
			cout<<" ";
		}

		//front pyramid
		for(int k = 1; k<=i; k++){
			cout<<"*";
		}

		//later pyramid
		for(int l=2; l<=i; l++){
			cout<<"*";
		}
		cout<<endl;
	}
}

void pattern8(int num){
	for(int i=num; i>0; i--){

		for(int j= num -i; j>0; j--){
			cout<<" ";
		}

		for(int k = i; k>0; k--){
			cout<<"*";
		}

		for(int l = i-1; l>0; l--){
			cout<<"*";
		}
		cout<<endl;
	}
}

void pattern9(int num){

	pattern7(num);
	pattern8(num);
}

void pattern10(int num){
	for(int i=1; i<=num; i++){
		for(int j=1; j<=i; j++){
			cout<<"*";
		}
		cout<<endl;
	}

	for(int i=num-1; i>=1; i--){
		for(int j=i; j>=1; j--){
			cout<<"*";
		}
		cout<<endl;
	}
}

void pattern11(int num){
	int ele =0;

	for(int i=1; i<=num; i++){
		for(int j=1; j<=i; j++){
			if(ele==0){
				cout<<"1 ";
				ele =1;
			}
			else{
				cout<<"0 ";
				ele =0;
			}
		}
		cout<<endl;
	}
}

int main(){
//striver patterns

	// int num;
	// cout<<"N: ";
	// cin>>num;
	// cout<<endl;

	// pattern1(num);
	// pattern2(num);
	// pattern3(num);
	// pattern4(num);
	// pattern5(num);
	// pattern6(num);

	pattern7(5);

	// pattern8(5);
	//pattern9(5);
	// pattern10(5);
	//pattern11(5);






	return 0;
}


