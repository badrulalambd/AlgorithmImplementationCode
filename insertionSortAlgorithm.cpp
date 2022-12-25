/*
in practical life, insertion-sort is used more than bubble and selection sort.
Worst-case Time-complexity : O(n2)
Best-case Time-complext : O(n) //if the array is already sorted...
Space-complexity : O(1)
*/

#include<bits/stdc++.h>

using namespace std;

void insertionSort(int [], int);
int main()
{
	int n, ar[10] = {50,3,10,2,29,40,8,20,5,1};
	n = 10;
	insertionSort(ar,n);
	return 0;
}

//Insertion-Sort-Algorithm Implementation.......................
void insertionSort(int ar[], int n)
{
	int i,j,item;
	for(i=1; i<n; i++)
	{
		item = ar[i];
		j = i-1;
		while(j>=0 && item<ar[j])
		{
			ar[j+1] = ar[j];
			j--;
		}
		ar[j+1] = item;	
	}
	//print the array after sorting .....
	for(i=0; i<n; i++)
		printf("%d  ",ar[i]);
	printf("\n");
}
