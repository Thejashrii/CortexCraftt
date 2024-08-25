#include<stdio.h>
#include<string.h>
#define MAX 100
int main()
{
	char str[MAX];
	printf("enter the string\n");
	fgets(str,sizeof(str),stdin);
	printf("enter the char\n");
	char ch=getchar();
	int l=strcspn(str,"\n");
	if(str[l]=='\n')
		str[l]='\0';
	char *p=strchr(str,ch);
	int n=strlen(str);
	if(*p)
	{
		memmove(p,p+1,strlen(p));
	}
	printf("%s\n",str);
}

