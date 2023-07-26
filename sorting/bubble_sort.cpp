#include <iostream>
#include <cmath>
using namespace std;
/*
    this sorting algorithm is stable and has time complexity O(n^2)
*/
void bubble_sort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        bool swap = false;  //to optimize code as if no swap occurs then array is always sorted
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swap = true;
            }
        }
        if(swap==false){
            break;
        }
    }

    //printing elements
    for(int i=0;i<n;i++){   
        cout<<arr[i]<<" ";
    }
}


int main(){
    int arr[] = {0,2,1,3,5,4,6,2};
    bubble_sort(arr,8);
    return 0;
}
