#include <stdio.h>
void swap(int *p,int *q)
{
  int temp=*p;
  *p=*q;
  *q=temp;
}
void selectionsort(int arr[],int n)
{
  for(int i=0;i<n-1;i++)
  {
      int min=i;
      for(int j=i+1;j<n;j++)
      {
        if(arr[j]<arr[min])
        {
          min=j;
          swap(&arr[min],&arr[i]);
        }
      }
  }
}
int main(void) {

  int arr[]= {2,7,6,8,10,32,23,15,67,87,34};
  int len=sizeof(arr)/sizeof(arr[0]);
  selectionsort(arr,len);
  printf("Hello World\n");
  for(int i=0;i<len;i++)
  {
    printf("%d ",arr[i]);
  }
  return 0;
}