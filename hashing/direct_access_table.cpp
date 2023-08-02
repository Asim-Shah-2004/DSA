/*
    direct access table
    works for only small values
*/


#include <iostream>
using namespace std;

int main(){
    int lb,ub,choice;
    cout<<"Enter the lower limit"<<endl;
    cin>>lb;
    cout<<"Enter upper limit"<<endl;
    cin>>ub;
    bool access_table[ub-lb+1];
    bool Running = true;

    //pre processing
    cout<<"1.insert"<<endl<<"2.search"<<endl<<"3.delete"<<endl<<"4.exit"<<endl;
    for(int i=0;i<(ub-lb);i++){
        access_table[i]=0;
    }

    while(Running){
        cout<<"Enter choice"<<endl;
        cin>>choice;
        switch (choice)
        {
        case 1:
            cout<<"Enter the data between "<<lb<<" and "<<ub<<" "<<endl;
            int data;
            cin>>data;
            access_table[data-lb]=1;
            break;
        case 2:
            cout<<"Enter the query"<<endl;
            int query;
            cin>>query;
            if(access_table[query-lb]){
                cout<<"data found"<<endl;
            }else{
                cout<<"not found"<<endl;
            }
            break;
        case 3:
            cout<<"Enter the data you want to delete"<<endl;
            data;
            cin>>data;
            access_table[data-lb]=0;
            break;
        case 4:
            Running = false;
            break;
        default:
            cout<<"Enter valid choice."<<endl;
            break;
    }

}

}
