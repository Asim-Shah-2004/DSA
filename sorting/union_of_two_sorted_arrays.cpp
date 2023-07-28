//union of sorted arrays
#include <iostream>
#include <cmath>
using namespace std;
void merge(int a[],int n1,int b[],int n2){

    int i=0;
    int j=0;
    while(i<n1 && j<n2){
        if(i>0&&a[i]==a[i-1]){
            i++;
            continue;
        }else if(j>0&&b[j]==b[j-1]){
            j++;
            continue;
        }else if(a[i]<b[j]){
            cout<<a[i]<<" ";
            i++;
        }else if(b[j]<a[i]){
            cout<<b[j]<<" ";
            j++;
        }else{
            cout<<a[i]<<" ";
            i++;
            j++;
        }
    }

    while(i<n1){
        if(i>0&&a[i]==a[i-1]){
            i++;
            continue;
        }
        cout<<a[i]<<" ";
        i++;
    }

    while(j<n2){
        if(j>0&&b[j]==b[j-1]){
            j++;
            continue;
        }
        cout<<b[j]<<" ";
        j++;
    }
    
}


int main(){
    int a[] = {3,5,8};
    int b[] = {2,3,8,9,10,15};
    merge(a,3,b,6);
    return 0;
}
