//frequency in sorted arrays
#include <iostream>
using namespace std;

void frequency(int arr[],int size){

    int count = 1;
    for(int i=0;i<size;i++){
        if(arr[i]==arr[i+1] && i!=size-1){
            count++;
        }else{
            cout<<arr[i]<<" "<<count<<endl;
            count=1;
        }
    }

}

int main(){
    int arr[] = {1,2,2,2};
    frequency(arr,4);    
    return 0;
}
