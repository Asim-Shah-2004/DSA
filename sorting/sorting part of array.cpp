#include <iostream>
#include <cmath>
using namespace std;

//sorting a part of array
//from low to mid array is sorted
//from mid+1 to high array is sorted
void merge_sort(int arr[],int size,int low,int mid,int high){
    
    //setting up auxilary space
    int n1 = mid-low+1;
    int n2 = high-mid;
    int left[n1];
    int right[n2];
    for(int i=0;i<n1;i++){
        left[i] = arr[low+i];
    }

    for(int i=0;i<n2;i++){
        right[i] = arr[mid+i+1];
    }

    //merging and sorting
    int i=0,j=0,k=low;
    while(i<n1 && j<n2){
        if(left[i]<=right[j]){
            arr[k]=left[i];
            k++;
            i++;
        }else{
            arr[k]=right[j];
            k++;
            j++;
        }
    }

    while(i<n1){
        arr[k]=left[i];
        k++;
        i++;
    }

    while(j<n2){
        arr[k]=right[j];
        k++;
        j++;
    }

    //printing elements
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    
}


int main(){
    int arr[] = {10,26,27,3,4,5,6,7,0,1,2,91,23,45};
    merge_sort(arr,14,3,7,10);
    return 0;
}
