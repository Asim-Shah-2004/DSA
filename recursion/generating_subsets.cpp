
// Input :  set = "abc"
// Output : "". "a", "b", "c", "ab", "ac", "bc", "abc"

// Input : set = "abcd"
// Output : "" "a" "ab" "abc" "abcd" "abd" "ac" "acd"
//          "ad" "b" "bc" "bcd" "bd" "c" "cd" "d"

#include <iostream>
using namespace std;

void sub_sets(string &str,string curr="",int i=0){
    //this is how we set initial values
    if(i==str.length()){
        cout<<curr<<endl;
        return;
    }
    sub_sets(str,curr,i+1);   //here we ignore character
    sub_sets(str,curr+str[i],i+1);  //here we add character
}

int main(){
    cout<<"The subsets are: "<<endl;
    string str = "ABC";
    sub_sets(str);
    return 0;
}
