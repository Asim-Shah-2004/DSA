//frequency in sorted arrays
#include <iostream>
using namespace std;

int stock_buy_and_sell(int arr[],int size){
    int buy=0;  //buying price
    int sell=0; //selling price
    int profit = 0;
    int flagB=0;
    for(int i=0;i<size;i++){
        if(i!=size-1){
            if(arr[i]<arr[i+1] && flagB==0){
                buy = arr[i];
                flagB=1;
            }else if(arr[i]>arr[i+1] && flagB==1){
                sell = arr[i];
                profit+=sell-buy;
                flagB=0;
            }
        }
        else if(i==size-1 && flagB==1){
            sell = arr[i];
            profit+= sell-buy;
        }
    }

    return profit;
}

int main(){
    int arr[] = {1,5,3,8,12,12};
    cout<<"The profit is "<<stock_buy_and_sell(arr,6)<<endl;    
    return 0;
}
