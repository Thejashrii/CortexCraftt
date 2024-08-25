#include<stdio.h>
#include<stdlib.h>
#include<stdio_ext.h>
char *getString()
{
	char *p=NULL;
	int i=0;
	do{
	p=realloc(p,i+1);
	p[i]=getchar();
	}while(p[i++]!='\n');
	p[i-1]='\0';
	return p;
}

int main()
{
	char *str=NULL;
	printf("enter the char\n");
	__fpurge(stdin);
	str=getString();
	printf("%s\n",str);
}


