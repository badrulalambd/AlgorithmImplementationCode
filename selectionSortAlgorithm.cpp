#include<bits/stdc++.h>

using namespace std;

void selectionSort(int [], int);

int main()
{
	int n, ar[10] = {50,8,3,10,4,10,6,15,7,2};
	n = 10;
	selectionSort(ar,n);
	return 0;
}
//Selection-Sort-Algorithm.....
void selectionSort(int ar[], int n)
{
	int min,i,j,tmp;
	for(i=0; i<n-1; i++)
	{
		min = i;
		for(j=i+1; j<n; j++)
		{ 
			if(ar[min]>ar[j])
			{
				min = j;
			}
		}
		if(min!=i)
		{
			tmp = ar[i];
			ar[i] = ar[min];
			ar[min] = tmp;
		}
	}
	for(i=0; i<n; i++)
	{
		printf("%d  ",ar[i]);
	}
	printf("\n");
}
