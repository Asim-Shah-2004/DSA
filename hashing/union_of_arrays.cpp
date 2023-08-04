#include <iostream>
#include <unordered_set>
using namespace std;

int union_of_array(int a[],int b[],int n1,int n2){
    unordered_set <int> s;
    for(int i=0;i<n1;i++){
        s.insert(a[i]);
    }

    for(int i=0;i<n2;i++){
        s.insert(b[i]);
    }

    return s.size();
}

int main(){
    int a[] = {1,2,3,4,5,6,7};
    int b[] = {3,4,5,6,7,8,9};
    cout<<"the size of union is "<<union_of_array(a,b,7,7)<<endl;   
}
