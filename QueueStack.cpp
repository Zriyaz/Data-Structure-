#include <iostream>
#include<bits/stdc++.h>
using namespace std;
class Queue
{
  private:
  stack<int>s1;
  //Method 2 (By making deQueue operation costly)
  public:
  void enqueue(int x)
  {
    s1.push(x);
  }
  int dequeue()
  {
     if(s1.empty())
     {
       cout<<"Queue is empty"<<endl;
       exit(0);
     }
     int data=s1.top();
     s1.pop();

     if(s1.empty())
     return data;

     int temp=dequeue();
     s1.push(data);
     return temp;
  }
};

int main() {
   Queue q; 
    q.enqueue(1); 
    q.enqueue(2); 
    q.enqueue(3); 
  
    cout << q.dequeue() << '\n'; 
    cout << q.dequeue() << '\n'; 
    cout << q.dequeue() << '\n'; 
  
    return 0; 
  
}