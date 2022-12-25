/*
Time complexity : log2(n)
Space Complexity : O(1)
*/
#include<stdio.h>


#define mx 100


using namespace std;

int binarySearch(int [],int,int);
int main()
{
	int n,item,i,ar[100] = {1,2,3,4,5,6,7,8,9};
	n = 9, item = 100;
	i = binarySearch(ar,n,item);
	if(i == -1)
		printf("Not found...\n");
	else
		printf("Found item Position : %d\n",i+1);
	return 0;
}

//Binary-Search-Algorithm...........
int binarySearch(int ar[], int n, int item)
{
	int low,high,mid;
	low = 0, high = n-1;
	mid = (low+high)/2;
	while(low<=high)
	{
		if(ar[mid] == item)
			return mid;
		else if(ar[mid]<item)
			low = mid+1;
		else if(ar[mid]>item)
			high = mid-1;
		mid = (low+high)/2;
	}
	return -1;
}

/*
Step 1: [INITIALIZE] SET BEG = lower_bound
END = upper_bound, POS=-1
Step 2: Repeat Steps 3 and 4 while BEG <=END
Step 3: SET MID = (BEG + END)/2
Step 4: IF A[MID] = VAL
SET POS = MID
PRINT POS
Go to Step 6
ELSE IF A[MID] > VAL
SET END = MID - 1
ELSE
SET BEG = MID + 1
[END OF IF]
[END OF LOOP]
Step 5: IF POS = -1
PRINT "VALUE IS NOT PRESENT IN THE ARRAY"
[END OF IF]
Step 6: EXIT
*/
