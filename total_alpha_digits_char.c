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
	int alpha=0,digits=0,special=0;
	while(*s)
	{
		if(*s>='A' && *s<='z')
			alpha++;
		else if(*s>='0' && *s<= '9')
			digits++;
		else
			special++;
		s++;
	}
	printf("%d\n%d\n%d\n",alpha,digits,special);
}

