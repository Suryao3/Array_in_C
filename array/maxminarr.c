#include<stdio.h>

int main()
{	
	int temp[10];
	int n=10,s=0;
   	int	array[10] = {1,2,3,4,5,6,7,8,9,10};
	
	for(int j=0;j<10;j++)
	{
		printf(" %d ",array[j]);
	}
	printf("\n");
	for(int i=0;i<n;i+=2)
	{
		temp[i] = array[n-s-1];
		temp[i+1] = array[s++];
	}

	for(int k=0;k<10;k++)
	{
		printf(" %d ",temp[k]);
	}
	printf("\n");
    return 0;
}
