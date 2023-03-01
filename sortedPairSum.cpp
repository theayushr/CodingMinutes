//#include<bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

pair<int, int> closestSum(vector<int> arr, int x){

    pair <int, int> near(arr[0], arr[1]);
    int sum = arr[0] + arr[1];
    int diff = (sum > x)? sum-x: x-sum;

    for(int i=0; i<arr.size() -1; i++){
        for(int j=1; j<arr.size(); j++){

            int csum = arr[i] + arr[j];
            int cdiff = (x > csum)? x-csum: csum-x;

            if(cdiff < diff){
                diff = cdiff;
                near.first = arr[i]; // since array is sorted so note that ith element will be smaller than jth
                near.second = arr[j];
            }
        }
    }
    return near;
}

/* 
I don't think that the function I made here is the best solution. It's just brute force solution and
the complexity is o(n^2). There must be a better way of doing the solution. I want to learn that and how
people approach these solutions.
*/ 

int main(){
    vector <int> arr = {10,22,28,29,30,40};
    int x =54;

    pair <int, int> sol = closestSum(arr,x);
    cout<<sol.first<<" and "<<sol.second;
    return 0;
}