//index of second largest element in one traversal

#include <iostream>
using namespace std;



int secondLargestElement(int arr[],int size){
    int index = 0;
    int largest = 0;
    int secondLargest = -1;
    for(int i=1;i<size-1;i++){
        if(arr[i]>arr[largest]){
            secondLargest = largest;
            largest = i;    
        }else if(arr[i]!=arr[largest]){
            if(secondLargest==-1||arr[i]>arr[secondLargest]){
                secondLargest=i;

                //the reason for secondLargest==-1 is in the case 
                // 12 12 12 7 where we have never seen a second largest element before
                //the reason for arr[i]>arr[secondLargest]){ is beacuse 
                //12 7 12 9
                // in both cases we have seen 3 elements already
            }
        }
    }

    return secondLargest;
}

int main(){
    int arr[] = {1,20,76,2,96,3,42,3,56,77,56};
    cout<<"The second largest element is at index "<<secondLargestElement(arr,11)<<endl;
    return 0;
}
