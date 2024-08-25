#include<stdio.h>
#include<string.h>
char *reverse(char*);
int main()
{
	char str[100],*ptr=NULL;
	printf("enter the string\n");
	gets(str);
	printf("%s",reverse(str));
	printf("\n");
	for(ptr=str;ptr=strtok(ptr," ");ptr=NULL)
	{
		printf("%s ",reverse(ptr));
		ptr=NULL;
	}
	printf("\n");
}
char *reverse(char *ptr)
{
	int length=strlen(ptr);char temp;
	for(int i=0,j=length-1;i<j;i++,j--)
	{
		temp=ptr[i];
		ptr[i]=ptr[j];
		ptr[j]=temp;
	}
	return ptr;
}
		
