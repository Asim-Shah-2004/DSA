#include <iostream>
using namespace std;

void print(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}

int hoare_partition(int a[],int l,int h){
    //considering first element as pivot
    int i=l-1;
    int j=h+1;
    while (true){
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

int min_diff(int a[],int n){
    quick_sort(a,0,n-1);
    int min = INT32_MAX;
    for(int i=1;i<n;i++){
        if((a[i]-a[i-1])<min){
            min = a[i]-a[i-1];
        }
    }
    return min;
}

int main(){
    int a[]={75,76,23,34,65,98,100};
    cout<<"The min diffrence is "<<min_diff(a,7);   
}
