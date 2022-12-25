//Merge sort Algorithm, it's a Divide and Qonqure algorithm
/*
Input : An array A
Output : An arry A after completng all steps of algorithm
1. If the element of the array is one or less than one, array is already sorted
2. put first half elements in a array named left then apply merge sort those elements.
3. put second half lements in a array named right then apply merge sort those elements.
4. apply merge on left and right arrays.
*/
/*
Space complexity: O(n) = O(n/2 + n/2) // extra L & R , n/2 & n/2 space will be taken 
Time complexity: O(nlog2(n)) //base two
where, O(n) is for every steps and log2(n) is the number of steps for n elements in the array.
Time complexit in recurence relation: T(n) = 2* T(n/2) + n
*/

#include<stdio.h>
#include<bits/stdc++.h>

void merge_sort(int[],int,int); //Function prototype 
void merge(int[],int,int,int);
//Main function.......................
int main()
{
	int n,i;
	int A[] = {4,2,10,5,1,20,3};
	n = 6;
	for(i=0; i<=n; i++)
		printf("%d	",A[i]);
	printf("\n");
	
	merge_sort(A,0,n); // Merge-Sort calling.........
	
	for(i=0; i<=n; i++)
		printf("%d	",A[i]);
	printf("\n");
	
	return 0;
}
//Merge-Sort Algorithm implementation.................
void merge_sort(int A[],int left, int right)
{
	int mid;
	if(left>=right)
	{
		return;
	}
	
	mid = left + (right-left)/2;
	merge_sort(A,left,mid); // recursive call
	merge_sort(A,mid+1,right); // recursive call
	merge(A,left,mid,right);
}
//merging two arrays 
void merge(int A[],int left, int mid, int right)
{
	int i;
	int index_a,index_l,index_r;
	int size_l, size_r;
	
	size_l = mid - left + 1;
	size_r = right - mid;
	
	int L[size_l]; // Left array 
	int R[size_r]; // Right array.
	
	for(i=0; i<size_l; i++)
	{
		L[i] = A[left+i];  // assign left lements into left-array(L)
		printf("L: %d\n",L[i]);
	}
	for(i=0; i<size_r; i++)
	{
		R[i] = A[mid+i+1];   // assign right elements into the right-array(R) 
		printf("R: %d\n",R[i]);
	}
	
	
	index_l = 0;
	index_r = 0;
	index_a = right - left ;
	//Combing left & right arrays as ascending or descending order ...
	while(size_l!=0 && size_r!=0)
	{
		if(L[index_l] <= R[index_r])
		{
			A[left] = L[index_l];
			index_l++;
			size_l--;
			left++;
		}
		else
		{
			A[left] = R[index_r];
			index_r++;
			size_r--;
			left++;
		}
	}
	//after ending any array (Left or Right), assign the next elements sequencially 
	if(size_l == 0)
	{
		while(size_r!=0)
		{
			A[left] = R[index_r];
			index_r++;
			size_r--;
			left++;
		}
	}
	else{
		while(size_l!=0){
			A[left] = L[index_l];
			index_l++;
			size_l--;
			left++;
		}
	}
}
