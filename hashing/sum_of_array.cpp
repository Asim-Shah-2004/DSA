#include <iostream>
#include <unordered_set>
using namespace std;

bool sum(int arr[],int n,int sum){
    unordered_set <int> s;
    for(int i=0;i<n;i++){
        if(s.count(sum-arr[i])){
            return true;
        }else{
            s.insert(arr[i]);
        }
    }
    return false;
}

int main(){
    int arr[] = {8,3,4,22,5};
    if(sum(arr,5,12)){
        cout<<"sum exists "<<endl;
    }else{
        cout<<"sum dosent exists "<<endl;
    }
    return 0;
}
