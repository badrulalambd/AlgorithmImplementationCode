/*
Heap is a complete binary tree. 
We can create a heap from a complete binary tree.
1. Max heap: parent nod will be greater that left & right child
2. Min heap: parent nod will be less than left & right child
in zero index we won't put any value for simplifying the implementation. We will start from index 1.
*/
#include<bits/stdc++.h>
int left(int);
int right(int);
int parent(int);
void max_heapify(int[] , int, int);
void build_max_heap(int [], int);
void heapsort(int [], int);
//main function..................
int main()
{
	printf("Max heap.\n");
	int heap[] = {0,1, 2, 3, 4, 5, 6, 7 ,8 ,9, 10};
	int heap_size = 10, i;
	
	for(i=0; i<=heap_size; i++)
	{
		printf("%d	",heap[i]);
	}
	printf("The End%d\n",heap_size);
	
	build_max_heap(heap,heap_size);
	
	for(i=0; i<=heap_size; i++)
	{
		printf("%d	",heap[i]);
	}
	printf("The End%d\n",heap_size);
	
	return 0;
}

//left child
int left(int i)
{
	return i*2;
}
//right child
int right(int i)
{
	return i*i + 1;
}
//parent child
int parent(int i)
{
	return i/2;
}
// max-heapify...
void max_heapify(int heap[], int heap_size, int i)
{
	int l,r,largest,t;
	largest = i;
	l = left(i); // index of left child
	r = right(i); // index of right child
	if(l<=heap_size && heap[l] > heap[i])
	{
		largest = l; // as heap[l] is greater than heap[i]
	}else{
		largest = i;
	}
	if(r<=heap_size && heap[r]>heap[largest])
	{
		largest = r;
	}
	//printf("\ni=%d  l=%d  r=%d largest=%d",i,l,r,largest);
	if(largest != i)
	{
		t = heap[i];
		heap[i] = heap[largest];
		heap[largest] = t;
		
		max_heapify(heap, heap_size, largest);
	}
}
// build max heap
void build_max_heap(int heap[], int heap_size)
{
	int i;
	for(i = heap_size/2; i>=1; i--){
		max_heapify(heap,heap_size,i);
	}
}

