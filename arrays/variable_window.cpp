//find if sum exists in sub array
#include <iostream>
#include <cmath>
using namespace std;
//using varaible window
void is_sum_there(int arr[],int size,int sum){
    int temp=0;
    int count=0;
    int flag=0;
    for(int i=0;i<size;i++){
        temp+=arr[i];
        while(temp>sum){
            temp-=arr[count];
            count++;
        }
        if(temp==sum){
            cout<<"The sum exists "<<endl;
            flag=1;
            break;
        }
    }
    if(flag==0){
        cout<<"sum dosent exist"<<endl;
    }
}

int main(){
    //array is always non negative
    int arr[] = {1,8,30,1,20,7};
    is_sum_there(arr,6,51);        
    return 0;
}
