#include <iostream>
using namespace std;
class Queue
{
  public:
   int front,rear;
   int *arr,size;
   Queue(int s)
   {
      front=rear=-1;
      size=s;
      arr=new int[s];
   }
   public:
   void enqueue(int data);
   void dequeue();
   void display();
   int isEmpty();
};
void Queue::enqueue(int data)
{
  if((rear+1)%size==front)
  {
    cout<<"Queue is full"<<endl;
    return;
  }
  else if(isEmpty())
  {
    front=rear=0;
    arr[rear]=data;
  }
  else
  {
    rear=(rear+1)%size;
    arr[rear]=data;
  }
}
void Queue::dequeue()
{
  int value;
  if(isEmpty())
  {
    cout<<"Queue is underflow"<<endl;
    return;
  }
  else if(front==rear)
  {
    value=arr[rear];
    front=rear=-1;
  }
  else {
   front=(front+1)%size;
  }
  cout<<" Deleted element ->\n"<<value;
}
void Queue::display()
{
    int i;
    if(isEmpty())
    cout<<"Empty Queue"<<endl;
    else
    {
        cout<<"\n Front ->"<<front;
        cout<<"\n Items -> ";
        for( i = front; i!=rear; i=(i+1)%size) {
            cout<<arr[i]<<" ";
        }
        cout<<arr[i];
        cout<<"\n Rear ->"<<rear;
    }
}
int Queue::isEmpty()
{
    if(front == -1) return 1;
    return 0;
}

int main() {

     Queue q(5); 
  
    // Inserting elements in Circular Queue 
    q.enqueue(10); 
    q.enqueue(8); 
    q.enqueue(-6); 
    q.enqueue(16); 
  
    // Display elements present in Circular Queue 
    q.display(); 
  
    // Deleting elements from Circular Queue 
    cout<<"\nDeleted value ="<<q.dequeue(); 
    //cout<<"\nDeleted value = "<<q.dequeue(); 
  
    q.display(); 
  
    q.enqueue(12); 
    q.enqueue(20); 
    q.enqueue(5); 
  
    q.display(); 
  
    q.enqueue(20); 
    return 0; 
}