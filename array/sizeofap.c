#include<stdio.h>

int main()
{
	int arr[] = {12,12,34,6,68,35};
	
	int *p = arr;
	
	//printf("%d\n",*p);
	//printf("%d\n",*(p++));	
	//printf("%d\n",*(++p));
	//printf("%d\n",*(++p));	
	//printf("%d\n",*(++p));
	//printf("%d\n",*(++p));
	//printf("%d\n",*(++p));
	//printf("%d\n",*(++p));
	
	//printf("%ld\n",(sizeof(*p)/sizeof(int)));	
	
	
    return 0;
}

/*
int count=0;
	
	while(1)
	{
		if(*(p+1))
		{
			*(p++);
			count++;
		}
	}
	printf("%d\n",count);
*/
