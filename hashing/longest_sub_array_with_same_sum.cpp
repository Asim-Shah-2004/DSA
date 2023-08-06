#include <iostream>
#include <unordered_map>
#include <cmath>
using namespace std;

int longest_common_sub_array(int a[],int b[],int n){
    int temp[n];
    for(int i=0;i<n;i++){
        temp[i] = a[i] - b[i];
    }

    //now we find the longest sub array with zero sum in temp

    int res=0,sum=0;
    unordered_map <int,int> map;
    for(int i=0;i<n;i++){
        sum+=temp[i];
        if(sum==0){
            res = i+1;
        }else if(map.count(sum)){
            res=max(res,i-map[sum]);
        }else{
            map.insert({sum,i});
        }
    }

    return res;
}

int main(){
    int a[] = {1,1,0,0,0,1,0};
    int b[] = {0,0,1,0,0,0,1};
    
    cout<<"The longest sub array with same sum is "<<longest_common_sub_array(a,b,7);
}
