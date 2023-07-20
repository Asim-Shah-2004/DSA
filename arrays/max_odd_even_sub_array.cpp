//max odd even sub array
#include <iostream>
#include <cmath>
using namespace std;

int max_odd_even_subArray(int arr[],int size){
    int len=0;
    int res = 0;
    for(int i=0;i<size;i++){
        if(((arr[i]%2==0 && arr[i+1]%2!=0)||(arr[i]%2!=0&&arr[i+1]%2==0))&&(i!=size-1)){
            len++;
        }
        else if((i==size-1)||(!((arr[i]%2==0 && arr[i+1]%2!=0)||(arr[i]%2!=0&&arr[i+1]%2==0)))){
            len++;
            res = max(res,len);
            len=0;
        }
    }
    return res;
}

int main(){
    int arr[] = {1,2,3,4};
    cout<<"The longest sub array lenght is "<<max_odd_even_subArray(arr,4);     
    return 0;
}
