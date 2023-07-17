//index of largest element 

#include <iostream>
using namespace std;

int largestElement(int arr[],int size){
    int index = 0;
    for(int i=1;i<size-1;i++){
        if(arr[i]>arr[index]){
            index = i;
        }
    }

    return index;
}

int main(){
    int arr[] = {1,20,76,2,96,3,42,3,56,77,56};
    cout<<"The largest element is at index "<<largestElement(arr,11)<<endl;
    return 0;
}
