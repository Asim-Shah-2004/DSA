#include <iostream>
#include <cmath>
using namespace std;

void print(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}

int hoare_partition(int a[],int l,int h){
    int pivot = a[l];  //this is an example the pivot needs to be randomized to assure O(nlogn) time complexity
    int i=l-1;
    int j=h+1;
    while(true){
        do{
            i++;
        }while(a[i]<a[l]);

        do{
            j--;
        }while(a[j]>a[l]);

        if(i>=j){
            return j;
        }
        swap(a[i],a[j]);
    }

}

void quick_sort(int a[],int l,int h){
    if(h>l){
        int p = hoare_partition(a,l,h);
        quick_sort(a,l,p);
        quick_sort(a,p+1,h);
    }
}

int main(){
    int a[]= {1,5,2,3,4,1,90};
    quick_sort(a,0,6);
    print(a,7);
    return 0;
}
