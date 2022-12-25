
/*
– O(n) calls to MAX-HEAPIFY, 
– Each of which takes O(lg n), 
– Complexity: O(n lg n).
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int parent(int i)
{
  return (i)/2;
}
int left(int i)
{
  return 2*i;
}
int right(int i)
{
  return 2*i+1;
}

//max heapify............................
void maxheapify(int arr[], int heapSize, int i)
{
  int l, r,largest,temp;
  l = left(i);
  r = right(i);
  if(l<=heapSize && arr[l] > arr[i])
    largest = l;
  else
    largest = i;
  if(r<=heapSize && arr[r] > arr[largest])
    largest = r;
  printf("\ni=%d  l=%d  r=%d largest=%d",i,l,r,largest);
  if(largest != i)
  {
    temp = arr[i];
    arr[i] = arr[largest];
    arr[largest] = temp;
    maxheapify(arr,heapSize,largest);
  }
}

//main function.........................
int main()
{
  int arr[200];
  int i=0,n, heapsize;
  printf("Enter the the of element in array : ");
  scanf("%d",&n);
  heapsize = n;
  printf("\nEnter the elements : ");
  for(i=1;i<=n;i++)
    scanf("%d",&arr[i]);

  printf("\n\tArray before max heap \n\n");
  for(i=1;i<=n;i++)
    printf("%d ",arr[i]);

	//Build max heap......................
  for(i=(heapsize)/2;i>=1;i--)
    maxheapify(arr,heapsize,i);

  printf("\n\n\tArray after Maxheap \n\n");

  for(i=1;i<=n;i++)
    printf("%d ",arr[i]);
}
