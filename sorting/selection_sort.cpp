#include <iostream>
#include <cmath>
using namespace std;
/*
    this sorting algorithm an unstable algorithm
    it uses less memory writes so it preserves life of hard disks etc(cycle sort is better)
    time complexity is O(n^2) in all cases
*/
void selection_sort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int min_index = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min_index]){
                min_index = j;
            }
        }
        int temp = arr[min_index];
        arr[min_index] = arr[i];
        arr[i] = temp;   
    }

    //printing elements
    for(int i=0;i<n;i++){   
        cout<<arr[i]<<" ";
    }
}


int main(){
    int arr[] = {0,2,1,3,5,4,6,2};
    selection_sort(arr,8);
    return 0;
}
