#include<stdio.h>
#include<ctype.h>
void uppercase(char *p)
{
	while(*p!='\0')
	{
		*p=toupper(*p);
		p++;
	}
}

int main()
{
	char str[20];
	printf("enter the string\n");
	gets(str);
	uppercase(str);
	printf("%s\n",str);
}
