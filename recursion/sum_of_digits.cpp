#include <iostream>
using namespace std;

int sum(int n){
    if(n<=0){
        return 0;
    }

    return n%10 + sum(n/10);
}

int main(){
    int digit;
    cout<<"Enter digit"<<endl;
    cin>>digit;
    cout<<"The sum is:"<<sum(digit)<<endl;
    return 0;
}
