//resursive binary search
#include <iostream>
#include <cmath>
using namespace std;

int binary_search(int arr[],int low,int high,int element){
    if(low>high){
        return -1;
    }
    int mid = (low+high)/2;
    if(arr[mid]==element){
        return mid;
    }else if(arr[mid]>element){
        binary_search(arr,low,mid-1,element);
    }else{
        binary_search(arr,mid+1,high,element);
    }
}

int main(){
    
    int arr[] = {1,2,3,4,5,6,7,8,9};
    cout<<"The element is at index "<<binary_search(arr,0,8,2);
    return 0;
}
