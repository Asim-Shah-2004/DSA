//count distinct elements
#include <iostream>
#include <unordered_set>
using namespace std;

int count(int arr[],int n){
    unordered_set <int> s;
    for(int i=0;i<n;i++){
        s.insert(arr[i]);
    }
    return s.size();
}

// //better implimentation
// int count(int arr[],int n){
//     unordered_set<int> s(arr,arr+n);
//     return s.size();
// }

int main(){
    int arr [] = {1,1,1,2,2,2,3,3,3,4,4,4};

    cout<<"the distinct elements are "<<count(arr,12);
}
