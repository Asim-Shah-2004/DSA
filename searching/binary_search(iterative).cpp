//iterative solution
#include <iostream>
#include <cmath>
using namespace std;

int binary_search(int arr[],int size,int element){

    int low=0;
    int high=size-1;
    while(high>=low){
        int mid = (low+high)/2;
        if(arr[mid]==element){
            return mid;
        }else if(arr[mid]>element){
            high = mid - 1;
        }else{
            low = mid+1;
        }
    }

    return -1;

}

int main(){
    
    int arr[] = {1,2,3,4,5,6,7,8,9};
    cout<<"The element is at index "<<binary_search(arr,9,7);
    return 0;
}
