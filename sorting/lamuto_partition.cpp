#include <iostream>
#include <cmath>
using namespace std;

void print(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}

void lamuto_partition(int a[],int n,int pivot){
    swap(a[pivot],a[n-1]);
    int i=-1;
    for(int j=0;j<n-1;j++){
        if(a[j]<a[n-1]){
            i++;
            swap(a[i],a[j]);
        }
    }
    swap(a[n-1],a[i+1]);
    print(a,5);
}



int main(){
    int a[] = {10,5,30,15,7};
    lamuto_partition(a,5,4);
    return 0;
}
