/*
Quick sort algoritm is the most important algorithm among other sorting algorithms..
in real life for solving problem it is used most of the time........................
It's a divide and conquere algorithm.

Average-case Time-Complexity: O(nlog(n))
Worst-case Time-Complexity: O(n2)

*/
#include<stdio.h>
#include<bits/stdc++.h>

void quick_sort(int[],int,int);
int partition(int[],int,int);
int main()
{
	printf("Quick sort Algorithm\n");
	int n,i;
	int A[] = {5,1,2,8,3,9,4};
	n = 6;
	for(i=0;i<=n;i++)
	{
		printf("%d  ",A[i]);
	}
	printf("\n");
	
	quick_sort(A,0,n);
	
	for(i=0;i<=n;i++)
	{
		printf("%d  ",A[i]);
	}
	printf("\n");
	return 0;
}
//QUICK SORT ALGORITHM.....
void quick_sort(int A[],int low, int high){
	if(low>=high){
		return;
	}
	int p;
	p = partition(A,low,high); // partitioning a array by setting pivot at the right position
	
	quick_sort(A,low, p-1);  // recursive call
	quick_sort(A,p+1, high); // recursive call
}

int partition(int A[],int low, int high){
	int pivot, i, j, t;
	pivot = A[high];
	//comparison all numbers with pivot and exchange i-th and j-th number according to if condition
	for(i=low-1, j=low; j<high; j++){
		if(A[j] < pivot){
			i++;
			t = A[j];
			A[j] = A[i];
			A[i] = t;
		}
	}
	// at last set the pivot at the right position
	t = A[high];  
	A[high] = A[i+1];
	A[i+1] = t;
	return i+1;
}
