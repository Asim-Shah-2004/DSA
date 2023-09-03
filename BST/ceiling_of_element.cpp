#include <bits/stdc++.h>
using namespace std;

void ceiling_of_element(int data[],int n){
    set <int> m;
    m.insert({data[0]});
    cout<<-1<<" ";
    for(int i=1;i<n;i++){
        m.insert({data[i]});
        auto it = m.upper_bound(data[i]);
        if(it==m.end()){
            cout<<-1<<" ";
        }else{
            cout<<(*it)<<" ";
        }
    }

}

int main(){
    int arr[] = {30,20,10};
    ceiling_of_element(arr,3);
    return 0;
}
