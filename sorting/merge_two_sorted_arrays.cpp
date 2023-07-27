#include <iostream>
#include <cmath>
using namespace std;
/*
    this sorting algorithm an stable amd inplace algorithm
    it is used for small arrays
    it has O(n^2) time complexity in worst case and O(N) time complexity in best case
    best algorithm for sorting when input size is less
*/

//sorting two sorted arrays
void merge_sort(int arr1[],int size1,int arr2[],int size2){
    int i=0;
    int j =0;
    for(int k=0;k<(size1+size2);k++){
        if(arr1[i]>=arr2[j]){
            cout<<arr2[j]<<" ";
            j++;
        }else{
            cout<<arr1[i]<<" ";
            i++;
        }
    }
}


int main(){
    int arr1[] = {1,5,10,13,15,17};
    int arr2[] = {2,3,4,8,16,25};
    merge_sort(arr1,6,arr2,6);
    return 0;
}
