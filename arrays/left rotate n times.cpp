//left rotate n times in linear time and constant space
#include <iostream>
using namespace std;

void reverse(int arr[],int low,int high){
    for(int i=low,j=high;i<high;i++,j--){
        if(i<=j){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
}

void leftRotate(int arr[],int size,int no_of_rotations){
    reverse(arr,0,no_of_rotations-1);
    reverse(arr,no_of_rotations,size-1);
    reverse(arr,0,size-1);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[] = {1,2,3,4,5,6,7};
    leftRotate(arr,7,3);
    return 0;
}
