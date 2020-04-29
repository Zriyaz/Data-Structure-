#include <stdio.h>
#include<stdlib.h>
#define SIZE 10
int Queue[SIZE];
int isEmpty();
int isFull();
void Enqueue();
void Dequeue();
void Display();
int front=-1;
int rear=-1;
int size;
int main()
{
  int choice;
  while (1)
  {
  int choice;
  printf("1.Insert element to queue \n");
  printf("2.Delete element from queue \n");
  printf("3.Display all elements of queue \n");
  printf("4.Quit \n");
  printf("Enter your choice : ");
  scanf("%d", &choice); 
  switch(choice)
  {
    case 1:
    Enqueue();
    break;
    case 2:
    Dequeue();
    break;
    case 3:
    Display();
    break;
    case 4:
    exit(1);
    default:
    printf("Please Try Again...?\n");
  }
 }
  return 0;
}
int isEmpty()
{
  if(rear==-1 && front==-1)
  return 1;
  else return 0;
}
int isFull()
{
  if(rear==SIZE-1)
  return 1;
  else return 0;
}
void Enqueue()
{

    int data;
    if(isFull()){
    printf("Queue is overflow");
    return;
   }
    printf("Enter The Queue Data:");
    scanf("%d",&data);
        
  if(isEmpty())
  {
    front=rear=0;
    Queue[rear]=data;
  }
  else
  {
    rear=rear+1;
    Queue[rear]=data;
  }
}
void Display()
{
  if(isEmpty())
   printf("Queue is underflow");
  else{
   for(int i=front;i<=rear;i++)
   printf("%d\n",Queue[i]);  
  }
}
void Dequeue()
{
  if(isEmpty())
  printf("Queue is underFlow\n");
  else if(rear==front)
  front=rear=-1;
  else
  front=front+1;
}