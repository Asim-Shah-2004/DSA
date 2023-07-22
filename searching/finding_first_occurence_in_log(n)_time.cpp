#include <iostream>
#include <cmath>
using namespace std;

int fisrt_occurence(int arr[],int size,int element){
    int low=0;
    int high=size-1;
    while(high>low){
        int mid = (high+low)/2;
        if(arr[mid]>element){
            high = mid-1;
        }else if(arr[mid]<element){
            low = mid+1;
        }else{
            //if the code reaches here then obviously arr[mid]==element
            if(arr[mid]!=arr[mid-1] || (mid==0)){
                return mid;
            }else{
                high = mid-1;   
                /*
                    if we have arr has {1,2,3,3,3,4,4,5}  (element=4)
                    in normal binary search we will get {3,4,4,5}
                    however this line will change the visibality to {3,4}
                    them binary search will start again for {3,4} subarray
                */
            }
        }
    }
}

int main(){
    //arr always sorted
    int arr[] = {1,2,3,3,3,4,4,5};
    cout<<"The element is at index "<<fisrt_occurence(arr,7,4);
    return 0;
}
