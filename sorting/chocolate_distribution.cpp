#include <iostream>
using namespace std;

void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int hoare_partition(int arr[],int low,int high){
    int i=low-1;
    int j=high+1;
    while(true){
        do{
            i++;
        }while(arr[i]<arr[low]);

        do{
            j--;
        }while(arr[j]>arr[low]);

        if(i>=j){
            return j;
        }
        swap(arr[i],arr[j]);
    }
}

void quick_sort(int arr[],int low,int high){
    if(high>low){
        int p = hoare_partition(arr,low,high);
        quick_sort(arr,low,p);
        quick_sort(arr,p+1,high);
    }
}

void chocolate(int arr[],int n){
    quick_sort(arr,0,n-1);
    int min=INT32_MAX;
    int index=0;
    for(int i=2;i<n;i++){
        if((arr[i]-arr[i-2])<min){
            min=arr[i]-arr[i-2];
            index = i;
        }
    }

    for(int j=index-2;j<=index;j++){
        cout<<arr[j]<<" ";
    }
}

int main(){
    int arr[] = {4,5,2,3,7,8};
    chocolate(arr,6);
    return 0;
}
