#include<stdio.h>
#include<string.h>
#include<stdio_ext.h>
void replace(char *,char,char);
int count=0;
int count_char(char *,char);
int main()
{
	char str[100],ptr[100],ch,c;
	printf("enter the string and character\n");
	gets(str);
	strcpy(ptr,str);
	scanf("%c",&ch);
	printf("enter the character to replace with\n");
	__fpurge(stdin);
	scanf("%c",&c);
	printf("no of occcurences of %c in %s is %d\n",ch,str,count_char(str,ch));
	replace(str,ch,c);
	printf("%s\n",str);
}
void replace(char *str,char ch,char c)
{
	while(*str)
	{
		if(ch==*str)
			*str=c;
		str++;
	}
}
int count_char(char *s,char ch)
{
	while(*s)
	{
		if(ch==*s)
			count++;
		s++;
	}
	return count;
}
