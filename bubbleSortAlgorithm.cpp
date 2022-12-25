/*
Time-Complexity : O(n2)
Space-Complexity : O(1)
*/
#include<bits/stdc++.h>

using namespace std;

void bubbleSort(int [],int); //function prototype declaration

int main()
{
	int n, i ,ar[10] = {2,8,1,15,50,12,20,8,3,25}; //input array	
	n = 10;
	
	for(i=0; i<n; i++)
	{
		printf("%d  ",ar[i]);
	}
	printf("\n\n");
	
	bubbleSort(ar,n); //calling function
	return 0;
}

//Bubble-Sort-Algorithm Implementation............................
void bubbleSort(int ar[], int n) //called function
{
	int i,j,tmp,k;
	for(i=0; i<n-1; i++)
	{
		for(j=0; j<n-i-1; j++)
		{
			if(ar[j]<ar[j+1])
			{
				tmp = ar[j];
				ar[j] = ar[j+1];
				ar[j+1] = tmp;
			}
		}
		
	  for(k=0; k<n; k++)
	  {
		printf("%d  ",ar[k]);
	  }
	  printf("\n");
	}
	//Print the array after sorting............
	for(i=0; i<n; i++)
	{
		printf("%d  ",ar[i]);
	}
}
