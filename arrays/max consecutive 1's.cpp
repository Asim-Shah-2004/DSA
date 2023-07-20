//max consecutive 1's
#include <iostream>
#include <cmath>
using namespace std;

int consecutive_1_(int arr[],int size){
    int temp=0;
    int max=0;
    int flag=0;
    for(int i=0;i<size;i++){
        if(arr[i]==0){
            temp=0;
        }else{
            temp++;
            max = temp>max?temp:max;
        }
    }

    return max;
}

int main(){
    int arr[] = {1,1,1,1};
    cout<<"The max is "<<consecutive_1_(arr,4);
     
    return 0;
}
