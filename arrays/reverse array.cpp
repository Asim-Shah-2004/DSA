//reverse an array

#include <iostream>
using namespace std;

void reverse(int arr[],int size){
    for(int i=0,j=size-1;i<size;i++,j--){
        if(j>=i){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[] = {1,20,76,2,96,3,42,3,56,77,56};
    reverse(arr,11);
    return 0;
}
