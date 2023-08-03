#include <iostream>
#include <unordered_set>
using namespace std;
int main(){
    unordered_set<int> s;

    //to insert elements
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    //s.begin() returns an itrator to the first element
    //s.end() return iterator beyond the last element
    for(auto it=s.begin();it!=s.end();it++){
        cout<<(*it)<<" ";
        //elements may be printed at any order
    }

    cout<<endl;

    //returs the size
    cout<<s.size()<<endl;

    //s.find() return adress if element is present otherwise returns s.end()
    if(s.find(3)==s.end()){
        cout<<"element not found"<<endl;
    }else{
        cout<<"element found"<<endl;
    }

    //s.count() returns 1 if element is there otherwise it returns 0
    if(s.count(2)){
        cout<<"element found"<<endl;
    }else{
        cout<<"element not found"<<endl;
    }

    //removes an element
    s.erase(3);
    cout<<s.size()<<endl;
    //we can also pass an iterator
    auto it = s.find(2);
    s.erase(2);
    cout<<s.size()<<endl;
    s.insert(3);
    s.insert(2);
    //we can also pass range
    s.erase(s.begin(),s.end());
    cout<<s.size()<<endl;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);

    //clears the set
    s.clear();
    cout<<s.size()<<endl;
