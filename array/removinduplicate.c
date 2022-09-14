#include<stdio.h>
#define size(a) sizeof(a)/sizeof(a[0])

void swap(int *array, int *j,int *size)
{
	int temp;//i = *j;
	for(int i=*j;i<=*size;i++)
	{
		temp=array[i];
		array[i]=array[i+1];
		array[i+1]=temp;
	}
	//printf("%d-%d-%d\n",i,i+1,size);
	*size-=1;
	//printf("size= %d\n",*size);
	//printf("array[i]= %d\n",array[i]);
	//printf("array[i+1]= %d\n",array[i+1]);
}

int main()
{
	int array[] = {1,0,2,9,3,8,1,0,6,5,3,8,4,6,1,5};
	int size = size(array);
	
	for(int i=0;i<size;i++)
	{
		for(int j=i+1;j<size;j++)
		{
			if(array[i] == array[j])
			{
				//printf("%d - %d - %d - %d\n",array[i],array[j],i,j);
				swap(array,&j,&size);
			}
		}
	}

	for(int y=0;y<size;y++)
		printf("%d ",array[y]);
	printf("\n");
	
    return 0;
}
