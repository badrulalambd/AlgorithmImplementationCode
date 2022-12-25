/*
Time Complexity of heap-sort: O(nlog2(n)) + O(nlog2(n)) = 2O(nlog2(n)) = O(nlog2(n))
here, O(n) -------> for() loop
	  O(log2(n))--> maxheapify() function
	  O(nlog2(n))-> buildmaxheap() function
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>

void buildmaxheap(int [],int);
void heapsort(int [], int);

int parent(int i)
{
  return i/2;
}
int left(int i)
{
  return 2*i;
}
int right(int i)
{
  return 2*i+1;
}
void maxheapify(int arr[], int heapSize, int i)
{
  int l, r,largest,temp;
  l = left(i);
  r = right(i);
  if(l<heapSize && arr[l] > arr[i])
    largest = l;
  else
    largest = i;
  if(r<heapSize && arr[r] > arr[largest])
    largest = r;
  //printf("\ni=%d  l=%d  r=%d largest=%d",i,l,r,largest);
  if(largest != i)
  {
    temp = arr[i];
    arr[i] = arr[largest];
    arr[largest] = temp;
    maxheapify(arr,heapSize,largest);
  }
}

//Main function.................
int main()
{
  int arr[200];
  int i,n;
  printf("Enter the the of element in array : ");
  scanf("%d",&n);
  printf("\nEnter the elements : ");
  for(i=1;i<=n;i++)
    scanf("%d",&arr[i]);

  printf("\nArray before max-heap(heap-sort) \n");
  for(i=1;i<=n;i++)
    printf("%d ",arr[i]);

   heapsort(arr, n);  // Heap-Sort

  printf("\n\nArray after HeapSort(Maxheap) \n\n");

  for(i=1;i<=n;i++)
    printf("%d ",arr[i]);
}
//Build max heap
void buildmaxheap(int arr[], int n){
	int i;
	for(i=n/2;i>=1;i--)
    maxheapify(arr,n,i);
}
//Heap-sort....
void heapsort(int arr[], int n){
	int i, t;
	
	buildmaxheap(arr, n);
	
	for(i=n; i>1; i--){
		t = arr[1];
		arr[1] = arr[i];
		arr[i] = t;
		
		n--;
		maxheapify(arr, n, 1);
	}
}
