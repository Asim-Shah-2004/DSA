// Given a rope of length N meters, and the rope can be cut in only 3 sizes A, B and C. The task is to maximizes the number of cuts in rope. 
//If it is impossible to make cut then print the number else print -1. Examples:
// Input: 
// N = 17, A = 10, B = 11, C = 3 
// Output: 3 
// Explanation: The maximum cut can be obtain after making 2 cut of length 3 and one cut of length 11. 
// Input: N = 10, A = 9, B = 7, C = 11 
// Output: -1 
// Explanation: It is impossible to make any cut so output will be -1.

#include <iostream>
#include <cmath>
using namespace std;

int max_cuts(int n,int a,int b,int c){
    if(n==0){
        return 0;
    }else if(n<0){
        return -1;
    }

    int res = max(max_cuts(n-a,a,b,c),max(max_cuts(n-b,a,b,c),max_cuts(n-c,a,b,c)));
    if(res==-1){
        return res;
    }else{
        return res+1;
    }
}

int main(){
    cout<<"The max no of cuts are: "<<max_cuts(23,11,12,9);
    return 0;
    //better solution by dynamic programming
}
