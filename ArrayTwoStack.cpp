#include<iostream>
using namespace std;
class twoStacks
{
  int *arr;
  int size;
  int top1,top2;
  public:
  twoStacks(int n)
  {
    arr=new int[n];
    size=n;
    top1=-1;
    top2=n;
  }
  void push1(int x)
  {
    if(top1<top2-1)
    {
      top1++;
      arr[top1]=x;
    }
    else{
      cout<<"Stack is overflow";
      exit(0);
    }
  }
  void push2(int x)
  {
     if(top1<top2-1)
     {
        top2--;
        arr[top2]=x;
     }
     else{
      cout<<"Stack is overflow";
      exit(0);
     }
  }
  int pop1()
  {
    if(top1>=0)
    {
      int data=arr[top1];
      top1--;
      return data;
    }
    else{
      cout<<"Stack is underflow";
      exit(0);
      }
  }
  int pop2()
  {
    if(top2<size)
    {
      int data=arr[top2];
      top2++;
      return data;
    }
    else{
      cout<<"Stack is underflow";
      exit(0);
      }
  }
};
int main() 
{ 
    twoStacks ts(5); 
    ts.push1(5); 
    ts.push2(10); 
    ts.push2(15); 
    ts.push1(11); 
    ts.push2(7); 
    cout << "Popped element from stack1 is " << ts.pop1(); 
    ts.push2(40); 
    cout << "\nPopped element from stack2 is " << ts.pop2(); 
    return 0; 
} 