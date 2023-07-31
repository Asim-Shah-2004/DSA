#include <iostream>
using namespace std;

void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

//dutch national flag algorithm (a version of hoares partition)
void seperete(int arr[],int n){
    int mid=0;
    int low=0;
    int high=n-1;
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[mid],arr[low]);
            mid++;
            low++;
        }else if(arr[mid]==1){
            mid++;
        }else{
            swap(arr[mid],arr[high]);
            high--;
        }
    }
    print(arr,n);
}

int main(){
    int arr[] = {1,2,0,0,2,1,0};
    seperete(arr,7);
    return 0;
}
