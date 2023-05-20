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
