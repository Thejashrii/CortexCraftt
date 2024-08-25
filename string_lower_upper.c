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

	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i]>96 && str[i]<124)
			str[i]=str[i]-32;
	}

	printf("%s\n",str);
}


