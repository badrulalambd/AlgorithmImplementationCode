/*
Worst-Time-Complexity : O(n)
Best-Time-Complexity : O(1)
Space Complexity : O(1)
*/
#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int linearSearch(int [],int,int);
int main()
{
	printf("Linear Search\n");
	int n,searchItem,i;
	int ar[10] = {3,1,7,10,5,2,9,6,8,4};
	searchItem = 3, n = 10;
	i = linearSearch(ar,n,searchItem); //Calling the linearSearch
	if(i == -1)
	{
		printf("Not found the item\n");
	}
	else{
		printf("Found item index: %d\n",i);
	}
	return 0;
}
//Linear-Search-Algorithm
int linearSearch(int ar[],int n,int element)
{
	int i;
	for(i=0; i<n; i++)
	{
		if(ar[i] == element)
		return i;
	}
	i = -1;
	return i;
}
/*
Linear Search ( Array A, Value x)

Step 1: Set i to 1
Step 2: if i > n then go to step 7
Step 3: if ar[i] = x then go to step 6
Step 4: Set i to i + 1
Step 5: Go to Step 2
Step 6: Print Element x Found at index i and go to step 8
Step 7: Print element not found
Step 8: Exit
*/
