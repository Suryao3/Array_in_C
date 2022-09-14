#include<stdio.h>
int main()
{
	int occurance[11],i,n,number,k;
	for(i=0;i<=10;i++)
	{
		occurance[i] = 0;
	}
	printf("Enter 10 numbers: ");
	for(n=0;n<=9;n++)
	{
		scanf("%d",&number);
		if(number<1 || number>10)
		{
			printf("[number must between 1 to 10]:%d ---> invalid .\n",number);
			n--;
		}
		else
		{
			++occurance[number];
		}
	}
	printf("Numbers count\n");
	for(k=1;k<=10;k++)
	{
		printf("%4d %6d\n",k,occurance[k]);
	}
	return 0;
}
