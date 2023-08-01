#include <iostream>
using namespace std;

void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


void counting_sort(int arr[],int n){
    int count[n];
    for(int i=0;i<n;i++){
        count[i]=0;
    }

    for(int i=0;i<n;i++){
        count[arr[i]]++;
    }

    for(int i=1;i<n;i++){
        count[i]=count[i]+count[i-1];
    }

    int output[n];
    for(int i=0;i<n;i++){
        output[count[arr[i]]-1]=arr[i];
        count[arr[i]]--;
    }    

    print(output,n);

}

int main(){
    int arr[] = {3,4,1,3,1,1,4,3,0,2};
    counting_sort(arr,10);
    return 0;
}
