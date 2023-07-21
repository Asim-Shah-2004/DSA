//find equibibrum point
//using concept prefix sum = suffix sum at equilibrum
// (IDK why this code produces an error in vs code)
#include <iostream>
#include <cmath>
using namespace std;

int equilibrum_point(int arr[],int size){
    
    int total_sum=0;   
    for(int i=0;i<size;i++){
        total_sum+=arr[i];
    }
    int ls = 0; //left sum
    for(int i=0;i<size;i++){
        total_sum-=arr[i];  //right sum
        if(ls==total_sum){
            return arr[i];
        }
        ls+=arr[i];
    }

    return -1;

}

int main(){
    
    int arr[] = {1,2,3,100,6};
    cout<<"The equilibrum point is "<<equilibrum_point(arr,6);
    return 0;
}
