#include <iostream>
#include <unordered_map>
#include <cmath>
using namespace std;

void longest_sum_subarray(int arr[],int n,int sum){
    unordered_map <int,int> prefix_sum;
    int p_sum=0;
    int res=0;
    for(int i=0;i<n;i++){
        p_sum+=arr[i];
        if(prefix_sum.count(p_sum-sum)){
            res = max(res,i-prefix_sum[p_sum-sum]);          
        }else if(p_sum==sum){
            res = i+1;
        }else{
            prefix_sum.insert({p_sum,i});
        }
    }

    cout<<"The max lenght is "<<res<<endl;
}

int main(){
    int arr[] = {8,3,1,5,-6,6,2,2};
    longest_sum_subarray(arr,8,4);
}
