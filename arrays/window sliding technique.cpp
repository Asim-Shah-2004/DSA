//you are given sub array lenght and you have to compute max sum
#include <iostream>
#include <cmath>
using namespace std;

int max_sum_for_given_lenght(int arr[],int size,int k){
    int temp=0;
    int sum=0;
    int max1=0;
    for(int i=0;i<size;i++){
        if(temp<k){
            sum+=arr[i];
            temp++;
        }else{
            max1=max(sum,max1);
            sum=sum-arr[i-k]+arr[i];
        }
    }
    return max1;
}

int main(){
    int arr[] = {1,8,30,-5,20,7};
    cout<<"The maximum sum is "<<max_sum_for_given_lenght(arr,6,4);
    return 0;
}
