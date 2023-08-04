#include <iostream>
#include <unordered_set>

using namespace std;

void intersection(int a[],int b[],int n1,int n2){
    
    unordered_set <int> s(b,b+n2);
    
    for(int i=0;i<n1;i++){
        if(s.count(a[i])){
            cout<<a[i]<<" ";
        }
    }
}

int main()
{
    int a[] = {10,15,20,25,30,50};
    int b[] = {30,5,15,80};
    intersection(a,b,6,4);
    return 0;
}
