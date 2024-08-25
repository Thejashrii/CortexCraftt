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
	int n=strlen(str);
	int i=n-1;
	while(i>=0)
	{
		if(str[i]==ch)
		{
			int j=i;
			while(j<n-1)
			{
				str[j]=str[j+1];
				j++;
			}
			break;
		}
		i--;

	}
	str[n-1]='\0';
	printf("%s\n",str);
}

