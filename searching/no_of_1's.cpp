//no of 1's in a sorted binary array
#include <iostream>
#include <cmath>
using namespace std;

int first_occurence(int arr[],int size){
    int low=0;
    int high = size-1;
    int element = 1;
    while(high>=low){
        int mid = (high+low)/2;
        if(arr[mid]>element){
            high=mid-1;
        }else if(arr[mid]<element){
            low = mid+1;
        }else{
            if(arr[mid]==0 || arr[mid]!=arr[mid-1]){
                return mid;
            }else{
                high = mid-1;
            }
        }
    }
    return -1;
}

int no_of_occurence(int arr[],int size){
    if(first_occurence(arr,size)==-1){
        return 0;
    }else{
        return (size-first_occurence(arr,size));
    }
}

int main(){
    int arr[] = {0,0,0,1,1,1,1};
    cout<<"no of occurences are "<<no_of_occurence(arr,7);
    return 0;
}
