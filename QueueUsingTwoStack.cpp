#include <iostream>
#include<bits/stdc++.h>
using namespace std;
class Queue
{
  private:
  stack<int >s1,s2;
  public:
  //Method 1 (By making enQueue operation costly)
  void enqueue(int x)
  {
    while(!s1.empty())
    {
      s2.push(s1.top());
      s1.pop();
    }
    s1.push(x);
    while(!s2.empty())
    {
      s1.push(s2.top());
      s2.pop();
    }
  }
  int dequeue()
  {
    if(s1.empty())
    {
      cout<<"Queue is Empty"<<endl;
      exit(0);
    }
    int data=s1.top();
    s1.pop();
    return data;
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