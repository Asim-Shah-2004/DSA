#include <iostream>
using namespace std;

void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void counting_sort(int arr[],int n,int exp){
    int count[10];
    int output[n];
    for(int i=0;i<10;i++){
        count[i]=0;
    }

    for(int i=0;i<n;i++){
        count[((arr[i])/exp)%10]++;
    }

    for(int i=1;i<10;i++){
        count[i]=count[i-1]+count[i];
    }

    for(int i=n-1;i>=0;i--){
        output[count[((arr[i]/exp)%10)]-1]=arr[i];
        count[((arr[i]/exp)%10)]--;
    }

    for(int i=0;i<n;i++){
        arr[i]=output[i];
    }

}

void radix_sort(int arr[],int n){
    int max = INT32_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }

    int digits = 0;
    while(max>0){
        max=max/10;
        digits++;
    }
    
    for(int i=1,exp=1;i<=digits;i++,exp=exp*10){
        counting_sort(arr,n,exp);
    }

    print(arr,n);

}


int main(){
    int arr[] = {6,50,319,601,100,5};
    radix_sort(arr,6);
    return 0;
}
