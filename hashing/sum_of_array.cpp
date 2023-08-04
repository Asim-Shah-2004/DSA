#include <iostream>
#include <unordered_set>
using namespace std;

bool sum(int arr[],int n,int sum){
    unordered_set <int> s(arr,arr+n);
    for(int i=0;i<n;i++){
        if(s.count(sum-arr[i])){
            return true;
        }
    }

    return false;
}

int main(){
    int arr[] = {1,5,6,7,2,3};
    if(sum(arr,6,12)){
        cout<<"sum exists "<<endl;
    }else{
        cout<<"sum dosent exists "<<endl;
    }
    return 0;
}
