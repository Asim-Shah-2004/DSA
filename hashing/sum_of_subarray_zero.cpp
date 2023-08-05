#include <iostream>
#include <unordered_set>
using namespace std;

bool zero_sum(int arr[],int n){
    unordered_set <int> prefix;

    //if the same prefix sum is there then sum of one sub array must be 0
    int sum = 0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(prefix.count(sum)){
            return true;
        }else if(sum==0){   //to handle special cases
            return true;
        }else{
            prefix.insert(sum);
        }
    }
    return false;
}

int main(){

    int arr[] = {-1,2,3,4,-8};

    if(zero_sum(arr,5)){
        cout<<"The sum is zero"<<endl;
    }else{
        cout<<"The sum is not zero"<<endl;
    }
}
