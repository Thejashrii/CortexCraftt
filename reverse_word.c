#include<stdio.h>
#include<string.h>
void reverse(char*);
int main()
{
	char str[100],*ptr=NULL;
	printf("enter the string\n");
	gets(str);
	ptr=str;
	while(ptr=strtok(ptr," "))
	{
		reverse(ptr);
		ptr=NULL;
	}
	printf("\n");
}
void reverse(char *ptr)
{
	int length=strlen(ptr);char temp;
	for(int i=0,j=length-1;i<j;i++,j--)
	{
		temp=ptr[i];
		ptr[i]=ptr[j];
		ptr[j]=temp;
	}
	printf("%s ",ptr);
}
		
