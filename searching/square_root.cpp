//sqaure root in log(N) time
#include <iostream>
#include <cmath>
using namespace std;

int square_root(int x){
    int low=0;
    int high = x-1;
    while(high>=low){
        int mid = (low+high)/2;
        if(mid*mid==x){
            return mid;
        }else if(mid*mid>x){
            high = mid-1;
        }else{
            low = mid+1;
        }
    }
}

int main(){
    cout<<"The square root is "<<square_root(69);    
    return 0;
}
