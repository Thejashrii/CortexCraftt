#include<stdio.h>
#include<string.h>
#define MAX 50
int main()
{
	char str[MAX];
	int i;
	printf("enter the string\n");
	fgets(str,sizeof(str),stdin);
	int l=strcspn(str,"\n");
	if(str[l]=='\n')
		str[l]='\0';
	char *s=str;
	while(*s)
	{
		if(*s>64 && *s<91)
			*s=*s+32;
		s++;
	}

	printf("%s\n",str);
}


