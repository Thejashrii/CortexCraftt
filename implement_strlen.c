#include<stdio.h>
#include<stdlib.h>
int main()
{
	char str[40];
	printf("enter the string\n");
	fgets(str,sizeof(str),stdin);
	long int i=0;
	while(str[i]!='\0')
	{
		i++;
	}
	printf("%ld is length of string\n",i-1);
}
