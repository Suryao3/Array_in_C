#include<stdio.h>

extern int min(int *arr)
{
	int count = 0;
	for(int i=0;i<7;i++)
	{
		count++;
	}
	int min = arr[0];
	
	for(int i=1;i<count;i++)
	{
		if(min>arr[i])
		{
			min = arr[i];
		}
	}
	return min;
}

int main()
{
	int arr[] = {11,98,62,2,10,88,34};
	
	printf("minimum value in array is %d\n",min(arr));	
	
    return 0;
}
