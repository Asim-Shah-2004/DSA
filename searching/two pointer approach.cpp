#include <iostream>
#include <cmath>
using namespace std;

//two pointers approach
//we have to see that a pair of two exists such that its sum equals to the given 
//x = given sum
void Findpair(int arr[],int size,int x){
    int i=0;
    int j=size-1;
    int flag=1;
    while(i<=j){
        if((arr[i]+arr[j])==x){
            cout<<"The sum exists"<<endl;
            flag=0;
            break;
        }else if(arr[i]+arr[j]>x){
            j--;
        }else{
            i++;
        }
    }
    if(flag==1){
        cout<<"the sum dosent exists"<<endl;
    }
}


int main(){
    int arr[] = {10,20,35,45,55,95,100};
    Findpair(arr,7,55);
    return 0;
}
