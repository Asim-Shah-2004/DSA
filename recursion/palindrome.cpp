#include <iostream>
using namespace std;
bool isPalindrome(string &str,int start,int end){
    if(start>=end){
        return true;
    }

    //write
    return (str[start]==str[end]) &&(isPalindrome(str,start+1,end-1));  //ths is called short circuiting
    //insted of
    // if(str[start]==str[end]){
    //     return isPalindrome(str,start+1,end-1);
    // }else{
    //     return false;
    // }
}

int main(){
    string str = "aabbaa";
    if(isPalindrome(str,0,5)){
        cout<<"Plaindrome";
    }else{
        cout<<"not palindrome";
    }
    return 0;
}
