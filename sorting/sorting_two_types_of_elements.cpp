//use modification of lamuto partition
//you can use hoares partition also
#include <iostream>
using namespace std;

void print(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}

//seperating odd and even
void seperete(int a[],int n){
    int i=-1;
    for(int j=0;j<n;j++){
        if(a[j]%2==0){
            i++;
            swap(a[i],a[j]);
        }
    }
    print(a,n);
}

int main(){
    int a[]={1,2,3,4,5,6,7};
    seperete(a,7);   
}
