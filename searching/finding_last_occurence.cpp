//finding last occurence
#include <iostream>
#include <cmath>
using namespace std;

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

}


int main(){
    int arr[] = {1,2,3,3,3,4,4,5};
    cout<<"The element is at index "<<last_occurence(arr,7,3);
    return 0;
}
