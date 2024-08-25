#include<stdio.h>
#include<string.h>
int main()
{
	char str[50];int j,i;
	puts("enter the string");
	gets(str);
	for(i=0,j=strlen(str)-1;i<=j;i++,j--)
	{
		if(str[i]!=str[j])
			break;
	}
	if(i>j)
		printf("%s is palindrome\n",str);
	else
		printf("%s is not palindrome\n",str);
}


