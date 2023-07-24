//find if triplet exists
#include <iostream>
#include <cmath>
using namespace std;
//x = given sum
int Findpair(int arr[],int size,int x){
    int i=0;
    int j=size-1;
    int flag=1;
    while(i<=j){
        if((arr[i]+arr[j])==x){
            return 1;
            break;
        }else if(arr[i]+arr[j]>x){
            j--;
        }else{
            i++;
        }
    }
    return 0;
}

void findTriplet(int arr[],int size,int x){
    int flag=0;
    for(int i=0;i<size-2;i++){
        if(Findpair(arr,size,x-arr[i])){
            cout<<"Triplet found"<<endl;
            flag=1;
            break;
        }
    }
    if(flag==0){
        cout<<"Triplet dosent exists"<<endl;
    }
}


int main(){
    int arr[] = {10,20,35,45,55,95,100};
    findTriplet(arr,7,250);
    return 0;
}
