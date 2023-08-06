#include <iostream>
#include <unordered_set>
#include <cmath>
using namespace std;

int sequence(int arr[],int n){
    unordered_set <int> s(arr,arr+n);
    int res=0,j=0;
    for(int i=0;i<n;i++){
        j=i;
        if(s.count(arr[i]-1)){
            continue;
        }
        int count = 1;
        int num=arr[i];
        while(s.count(num+1)){
            count++;
            num++;
        }

        res=max(res,count);
        count=1;
    }

    return res;

}

int main(){
    int arr[] = {1,3,2,4,5,9,10,8,7,11,12,15,13,14};
    cout<<"The max lenght of sequence is "<<sequence(arr,14);
    return 0;
}
