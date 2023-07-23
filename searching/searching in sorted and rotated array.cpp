#include <iostream>
#include <cmath>
using namespace std;
/*
    main logic:-
    in a rototed array always one half is sorted
*/
int search(int arr[],int size,int x){
    int low=0;
    int high = size-1;
    while(high>=low){
        int mid = (low+high)/2;
        if(arr[mid]==x){
            return mid;
        }else if(arr[mid]>arr[low] /*indicating left half sorted*/){
            if(arr[mid-1]>x && arr[low]<x /*checking if element lies in left half*/){
                high = mid-1;  //shifting to left half
            }else{
                low = mid+1;    //shifting to right half
            }
        }else{  //right half sorted
            if(arr[mid+1]<x && arr[high]>x  /*checking if element lies here*/){
                low = mid +1;   //shifting to right half
            }else{
                high = mid-1;   //shifting to left half
            }
        }
    }

    return -1;
}

int main(){
    int arr[] = {75,90,100,4,5,6,7,8,9};
    cout<<"the element is at "<<search(arr,9,90);    
    return 0;
}
