#include <iostream>
#include <deque>
using namespace std;

class DS{
    deque <int> dq;
    
    public:

    void insert_Max(int data){
        dq.push_back(data);
    }

    void insert_Min(int data){
        dq.push_front(data);
    }

    int getMax(){
        return dq.back();
    }

    int getMin(){
        return dq.front();
    }

    int extractMin(){
        int x = dq.front();
        
        dq.pop_front();
        
        return x;
    }
    
    int extractMax(){
      int x = dq.back();
        
      dq.pop_back();
        
      return x;
    }


};

int main()
{
	DS ds;
		
	ds.insert_Min(10);
	ds.insert_Max(15);
	ds.insert_Min(5);
	
	int x= ds.extractMin();
	cout << x << endl;
	
	x= ds.extractMax();
	cout << x << endl;
	
	ds.insert_Min(8);
    
	return 0;
}
