#include <iostream>
#include <cmath>
using namespace std;

void print(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}

void Hoare_partition(int a[],int n){
    //pivot is not an index
    /*
        in this technique pivot might not be in the correct position 
        all elements from 0 to j are smaller then pivot 
        and from j+1 to n-1 are greater than pivot
    */
    int i=-1;
    int j=n;
    int pivot = a[0]; //always the first element is the pivot
    while(true){
        do{
            i++;
        }while(a[i]<pivot);

        do{
            j--;
        }while (a[j]>pivot);

        if(i>=j){
            break;
        }
        swap(a[i],a[j]);
    }
    print(a,n);
}



int main(){
    int a[]= {15,5,30,10,7};
    Hoare_partition(a,5);
    return 0;
}
