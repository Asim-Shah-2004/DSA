#include <iostream>
#include <cmath>
using namespace std;
/*
    this sorting algorithm an stable amd inplace algorithm
    it is used for small arrays
    it has O(n^2) time complexity in worst case and O(N) time complexity in best case
    best algorithm for sorting when input size is less
*/
void insertion_sort(int arr[],int n){
    int j=0;
    for(int i=1;i<n;i++){
        int key = arr[i];
        j=i-1;
        while(j>=0 && arr[j]>key){  //we dont out >= sign because > helps maintain stability
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key; 
    }

    //printing elements
    for(int i=0;i<n;i++){   
        cout<<arr[i]<<" ";
    }
}


int main(){
    int arr[] = {0,2,1,3,5,4,6,2};
    insertion_sort(arr,8);
    return 0;
}
