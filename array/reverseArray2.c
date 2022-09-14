#include<stdio.h>

int main()
{
	int arr[10] = {12,45,0,46,28};
	int temp[10];
	int tmp;
	
	for(int k=0;k<5;k++)
	{
		printf("%d ",arr[k]);
	}
	printf("\n");
	
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<i;j++)
		{
			tmp = arr[i];
			arr[i] = arr[j];
			arr[j] = tmp;
		}
	}
	for(int k=0;k<5;k++)
	{
		printf("%d ",arr[k]);
	}
	 
    return 0;
}
