#include<stdio.h>
#include<string.h>
#define MAX 100
int main()
{
	char str[MAX];
	int i;
	printf("enter the string\n");
	fgets(str,sizeof(str),stdin);
	int l=strcspn(str,"\n");
	if(str[l]=='\n')
		str[l]='\0';
	int words=0;
	char *s=str;
	while(*s)
	{
		if(*s==32 && ((*(s-1))!=32))
			words++;
		s++;
	}
	printf("%d\n",words+1);
}

