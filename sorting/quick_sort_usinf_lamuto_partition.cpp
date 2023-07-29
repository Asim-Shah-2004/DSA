#include <iostream>
#include <cmath>
using namespace std;

void print(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}

int lamuto_partition(int a[],int l,int h){
    int pivot = l + rand() % (h-l); //randomize pivot to avoid worst case
    swap(a[pivot],a[h]);
    int i=l-1;
    for(int j=l;j<h;j++){
        if(a[j]<a[h]){
            i++;
            swap(a[j],a[i]);
        }
    }
    swap(a[i+1],a[h]);
    return (i+1);
}

void quick_sort(int a[],int l,int h){

    if(h>l){    //ensures we have atleast 2 elements
        int p = lamuto_partition(a,l,h);
        quick_sort(a,l,p-1);
        quick_sort(a,p+1,h);
    }

}

int main(){
    int a[]= {8,4,7,9,3,10,15};
    quick_sort(a,0,6);
    print(a,7);
    return 0;
}
