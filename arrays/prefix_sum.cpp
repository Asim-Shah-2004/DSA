//find sum of any sub array in constant time
#include <iostream>
#include <cmath>
using namespace std;

int prefix_sum(int arr[],int size,int start,int end){
    
    //precomputing values
    int sum[size];
    int temp=0;
    for(int i=0;i<size;i++){
        temp+=arr[i];
        sum[i]=temp;
    }

    //calculating result
    if(start==0){
        return sum[end];
    }else{
        return (sum[end]-sum[start-1]);
    }

    //O(1) time and O(n) space

}

int main(){
    
    int arr[] = {1,2,3,4,5,6,7,8,9};
    cout<<"The sum is :"<<prefix_sum(arr,9,3,6);
    return 0;
}
