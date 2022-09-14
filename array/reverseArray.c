#include<stdio.h>
#define size(a) sizeof(a)/sizeof(a[0])

int main()
{
	int array[] = {23,13,77,8,56,47,89,67,55};
	int i,j,temp;
	
	for(int h=0;h<size(array);h++)
	{
		printf("%d ",array[h]);
	}
	printf("\n");
	
	i=0;
	j=size(array);
	
	for(int k=0;k<(size(array)/2);k++)
	{
		temp = array[i];
		array[i] = array[j-1];
		array[j-1] = temp;
		i++;
		j--;
	}
	
	for(int h=0;h<size(array);h++)
	{
		printf("%d ",array[h]);
	}
	printf("\n");
	
    return 0;
}
