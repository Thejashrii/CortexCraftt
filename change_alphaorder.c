#include<stdio.h>
#include<string.h>
int main()
{
	char temp,str[30];
	printf("enter the string\n");
	gets(str);
	int l=strlen(str);
	for(int i=0;i<l-1;i++)
	{
		for(int j=i+1;j<l;j++)
		{
			if(str[i]>str[j] && )
			{
				temp=str[i];
				str[i]=str[j];
				str[j]=temp;
			}
		}
	}
	printf("%s\n",str);
}


