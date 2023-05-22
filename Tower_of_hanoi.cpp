#include <iostream>
using namespace std;

void TOI(int n,char A,char B,char C){
    if(n==1){
        cout<<"Move disc 1 form "<<A<<" To "<<C<<endl;
        return;
    }
    TOI(n-1,A,C,B);
    cout<<"Move disc "<<n<<" form "<<A<<" To "<<C<<endl;
    TOI(n-1,B,A,C);
}

int main(){
    TOI(3,'A','B','C');
    return 0;
}
