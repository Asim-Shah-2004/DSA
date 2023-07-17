//check is array is sorted

#include <iostream>
using namespace std;

int flag1=0;
int flag2=0;
bool isSorted(int arr[],int size){
    for(int i=0;i<size-1;i++){
        if(arr[i+1]>arr[i]){
            flag1++;
        }else if(arr[i+1]<=arr[i]){
            flag2++;
        }
    }

    if(flag1==size-1||flag2==size-1){
        return true;
    }else{
        return false;
    }
}

int main(){
    int arr[] = {11,10,9,8,7,6,5,4,3,2,1};
    if(isSorted(arr,11)){
        cout<<"The array is sorted"<<endl;
    }else{
        cout<<"The array is not sorted"<<endl;
    }    
    return 0;
}
