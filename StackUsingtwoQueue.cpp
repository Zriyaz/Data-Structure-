#include <iostream>
#include<bits/stdc++.h>
using namespace std;
class Stack
{
  private:
  queue<int> q1,q2;
  
  //Method 2 (By making deQueue operation costly)
  public:
  int size;
  Stack()
  {
   size=0;
  }
  void push(int x)
  {
    size++;
    q2.push(x);
    while(!q1.empty())
    {
      q2.push(q1.front());
      q1.pop();
    }
    queue<int>temp=q1;
    q1=q2;
    q2=temp;
  }
  void pop()
  {
    if(q1.empty())
    return;
    q1.pop();
    size--;
  }
  int top()
  {
    if(q1.empty())
    return -1;
    return q1.front();
  }
  int Size()
  {
    return size;
  }
 
};
int main() 
{ 
    Stack s; 
    s.push(1); 
    s.push(2); 
    s.push(3); 
  
    cout << "current size: " << s.Size() << endl; 
    cout << s.top() << endl; 
    s.pop(); 
    cout << s.top() << endl; 
    s.pop(); 
    cout << s.top() << endl; 
    cout << "current size: " << s.Size() << endl; 
    return 0; 
} 