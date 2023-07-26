#include <iostream>
#include <cmath>
using namespace std;

/*
    here we have to find repeating element with constraints
    1. 0 should be present
    2.only one element is repeating
    3.it has to have a max element 
    4. every element from 0 to max must be present
    5. 0<=max<=size-2 (derived from these constraints)

    logic:- we will have two pointers 
    one is fast and another is slow 
    fast+=2 and slow++
    every element will point to an index
    if there is a repeating element both will meet

    (linkled list type problem)
*/
int repeating(int arr[],int size){
    int slow = arr[0]+1;
    int fast = arr[0]+1;
    //phase 1
    //checking if link is present and finding location of element before node
    do{
        slow = arr[slow]+1;   //moving one index at a time
        fast = arr[arr[fast]+1]+1;//moving two index at a time
    }while(slow!=fast);
    slow = arr[0]+1;//resetting slow
    //phase 2
    //here if link is there and if they move at same pace they will meet at the node
    while(slow!=fast){
        slow = arr[slow]+1;
        fast = arr[fast]+1;
    }    
    return slow-1;

    //WE do +1 to avoid infinite loops
}

int main(){
    int arr[] = {0,2,1,3,5,4,6,2};
    cout<<"The repeating element is :"<<repeating(arr,8)<<endl;
    return 0;
}
