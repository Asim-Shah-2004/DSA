//no of occurences
#include <iostream>
#include <cmath>
using namespace std;

int first_occurence(int arr[],int size,int element){

    int low=0;
    int high = size-1;
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

int last_occurence(int arr[],int size,int element){

    int low=0;
    int high = size-1;
    while(high>=low){
        int mid = (low+high)/2;
        if(arr[mid]>element){
            high = mid-1;
        }else if(arr[mid]<element){
            low = mid+1;
        }else{
            if(mid==size-1 || arr[mid]!=arr[mid+1]){
                return mid;
            }else{
                low = mid + 1;
            }
        }
    }
    return -1;
}

int no_of_occurence(int arr[],int size,int element){
    if(first_occurence(arr,size,element)==-1){
        return 0;
    }else{
        return (last_occurence(arr,size,element)-first_occurence(arr,size,element))+1;
    }
}

int main(){
    int arr[] = {1,2,3,3,3,4,4,5};
    cout<<"no of occurences are "<<no_of_occurence(arr,7,4);
    return 0;
}
