#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdio_ext.h>
char *getString()
{
	int i=0;
	char *p=NULL;
	do
	{
		p=realloc(p,i+1);
		p[i]=getchar();
	}while(p[i++]!='\n');
	p[i-1]='\0';
	return p;
}
char *reverse(char *p)
{char temp;
	for(int i=0;i<((strlen(p))/2-1);i++)
	{
		temp=p[i];
		p[i]=p[strlen(p)-2-i];
		p[strlen(p)-2-i]=temp;
	}
	return p;
}
int main()
{
	char str[20];
	printf("enter the char\n");
	gets(str);
	char ptr[20];
	ptr=str;
	//str=getString();
	printf("%s is reverse of %s\n",reverse(str),str);
}

