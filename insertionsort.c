#include<stdio.h>


void insertionsort(int arr[],int n)
{
  int key,i,j;
  for(i=1;i<n;i++)
  {
    key=arr[i];
    j=i-1;
    while(j>=0 && key<arr[j])
    {
        arr[j+1]=arr[j];
        j--;
    }
    arr[j+1]=key;
  }
}
int main(void)
{
int arr[]= {2,7,6,8,10,32,23,15,67,87,34};
  int len=sizeof(arr)/sizeof(arr[0]);
  insertionsort(arr,len);
  printf("Hello World\n");
  for(int i=0;i<len;i++)
    printf("%d ",arr[i]);
  return 0;
}