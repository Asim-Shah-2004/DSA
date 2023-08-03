#include <iostream>
#include<bits/stdc++.h>
using namespace std;

class Hash{
    int bucket; //no of divisions in hashmap
    list<int> *table;
    public:
        Hash(int bucket){
        this->bucket=bucket;
        table = new list<int>[bucket];  //array of linked lists
    }


    void insert(int data){
        int i = data % bucket;  //hashing elements
        table[i].push_back(data);   //storing data
    }

    bool search(int data){
        int i = data % bucket;    //figuring out index in constant time
        for(auto x: table[i]){  //traversing in the linked list
            if(x==data){
                return true;
            }
        }

        return false;
    }

    void remove(int data){
        int i = data % bucket;  //figuring out index in constant time
        table[i].remove(data);
    }

};

int main(){

    Hash h(7);
    int data[] = {70,71,56,9,72};
    for(int i=0;i<5;i++){
        h.insert(data[i]);
    }
    if(h.search(72)){
        cout<<"data found"<<endl;
        h.remove(72);
    }

    if(h.search(72)){
        cout<<"data found"<<endl;
    
    }else{
        cout<<"data not found"<<endl;
    }
    return 0;
}
