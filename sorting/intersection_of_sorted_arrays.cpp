//intersection of sorted arrays(printing common elements)
#include <iostream>
#include <cmath>
using namespace std;
void merge(int a[],int n1,int b[],int n2){
    int i=0;
    int j=0;
    while(i<n1&&j<n2){
        if(i>0 && a[i]==a[i-1]){
            i++;
            continue;
        }else if (j>0 && b[j]==b[j-1]){
            j++;
            continue;
        }else if(a[i]>b[j]){
            j++;
        }else if(a[i]<b[j]){
            i++;
        }else{
            cout<<a[i]<<" ";
            i++;j++;
        }
        
    }
}


int main(){
    int a[] = {3,5,8};
    int b[] = {2,3,8,9,10,15};
    merge(a,3,b,6);
    return 0;
}
