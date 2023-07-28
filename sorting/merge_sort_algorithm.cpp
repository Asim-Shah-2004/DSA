/*
    this is a divide and conquor algorithm
    time complexity O(nlog(n))
*/
#include <iostream>
#include <cmath>
using namespace std;

void merge(int a[],int low,int mid,int high){
    int n1 = mid-low+1;
    int n2 = high-mid;
    int left[n1];
    int right[n2];

    //setting up auxilary space
    for(int i=0;i<n1;i++){
        left[i] = a[i+low];
    }

    for(int i=0;i<n2;i++){
        right[i] = a[i+mid+1];
    }

    //merging sorted arrays

    int i=0,j=0,k=low;
    while(i<n1 && j<n2){
        if(left[i]<=right[j]){
            a[k] = left[i];
            k++;
            i++;
        }else{
            a[k] = right[j];
            k++;
            j++;
        }
    }

    while(i<n1){
        a[k] = left[i];
        k++;
        i++;
    }

    while(j<n2){
        a[k] = right[j];
        k++;
        j++;
    }
}

void merge_sort(int a[],int low ,int high){
    if(high>low){   //ensures atleast two elements
        int mid = (low+high)/2;
        merge_sort(a,low,mid);
        merge_sort(a,mid+1,high);
        merge(a,low,mid,high);
    }
}

void print(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}



int main(){
    int a[] = {10,5,30,15,7};
    merge_sort(a,0,4);
    print(a,5);
    return 0;
}
