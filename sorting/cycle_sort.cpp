#include <iostream>
using namespace std;

void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void cycle_sort(int arr[],int n){
    for(int cs=0;cs<n-1;cs++){
        int item = arr[cs];
        int pos = cs;
        for(int i=cs+1;i<n;i++){
            if(arr[i]<item){
                pos++;
            }
        }
        swap(item,arr[pos]);
        while(pos!=cs){
            pos=cs;
            for(int i=cs+1;i<n;i++){
                if(arr[i]<item){
                    pos++;
                }
            }
            swap(item,arr[pos]);
        }
    }
}

int main(){
    int arr[] = {10,20,30,50,90,10,60};
    cycle_sort(arr,7);
    print(arr,7);
    return 0;
}
