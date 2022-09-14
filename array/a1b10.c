#include<stdio.h>
#include<string.h>

int main()
{
	char str[50];
	char ch;
	int n=0;
	
	printf("Enter a string: ");
	scanf("%s",str);

	for(int i=0;i<strlen(str);i++)
	{
		if(((int)str[i] >= 65 && (int)str[i] <=90) || ((int)str[i]>=96 && (int)str[i]<=122))
		{
			ch = str[i];
			n=0;
		}
		else
		{
			n = (n*10)+((int)(str[i])) - 48;
		}
		for(int k=0;k<n;k++)
		{
			printf("%c",ch);
		}
	}
	printf("\n");

	return 0;
}

/* ascii of 0 is 48*/
