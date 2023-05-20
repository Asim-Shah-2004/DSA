#include <iostream>
using namespace std;

int sum(int n){
    if(n<=9){       //this slightly improves the time complexity and space complexity since 
                    //there is one less call (in this case iterative solution is better)
        return n;
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
