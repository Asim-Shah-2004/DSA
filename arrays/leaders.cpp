//leaders in an array
#include <iostream>
using namespace std;

void leaders(int arr[],int size){
    cout<<"the leaders are:"<<endl;
    int large=arr[size-1];
    cout<<large<<endl;
    for(int i=size-2;i>=0;i--){
        if(arr[i]>large){
            cout<<arr[i]<<endl;
            large = arr[i];
        }else{
            large = arr[i+1];
        }
    }

    //to print in order simply store in array and then reverse
}

int main(){
    int arr[] = {7,10,4,3,6,5,2};
    leaders(arr,7);
    return 0;
}
