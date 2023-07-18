//zeros to one side
#include <iostream>
using namespace std;
void zeros(int arr[],int size){
    int count = 0;
    for(int i=0;i<size;i++){
        if(arr[i]!=0){
            int temp = arr[i];
            arr[i] = arr[count];
            arr[count] = temp;
            count++;
        }
    }

        for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[] = {5,0,0,0,10,0,20,75,0,0,0,30};
    zeros(arr,12);
    return 0;
}
