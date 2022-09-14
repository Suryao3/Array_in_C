#include<stdio.h>
#include<string.h>

int main()
{
	char pattern[] = 'a1b2';
	int n=0,i=0;
	
	while(pattern[i] != '\0')
	{
		if( ((int)str[i] >= 48) && ((int)str[i] <=58) )
		{
			n = (n*10) + (int)str[i] - 48;
			
		}
		else
		{
			n=0;
		}
		for(int j=0;j<n;j++)
		{
			printf("%c",str[i-1]);
		}
		i++;
	}
	
}
