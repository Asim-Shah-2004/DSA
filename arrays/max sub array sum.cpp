//max sub array sum
#include <iostream>
#include <cmath>
using namespace std;

int max_subarray_sum(int arr[],int size){
    int maxEnding = arr[0];
    int res = arr[0];
    for(int i=1;i<size;i++){
        maxEnding = max((maxEnding + arr[i]),arr[i]);
        res = max(res,maxEnding);
    }
    
    return res;
}

int main(){
    int arr[] = {-5,1,-2,3,-1,2,-2};
    cout<<"The max sum is "<<max_subarray_sum(arr,7);     
    return 0;
}
