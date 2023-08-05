#include <iostream>
#include <unordered_set>
using namespace std;

bool sum(int arr[],int n,int sum){
    unordered_set <int> prefix_sum;
    int p_sum = 0;
    for(int i=0;i<n;i++){
        p_sum+=arr[i];
        if(prefix_sum.count(p_sum-sum)){
            return true;
        }else if(p_sum==sum){
            return true;
        }else{
            prefix_sum.insert(p_sum);
        }
    }

    return false;

}

int main(){
    int arr[] = {1,2,3,4,5,6,7};
    if(sum(arr,7,5)){
        cout<<"the sum exists "<<endl;
    }else{
        cout<<"The sum dosent exists "<<endl;
    }
}
