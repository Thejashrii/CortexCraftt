#include<stdio.h>
#include<string.h>
#include<stdio_ext.h>
void  delete_char(char *,char);
int main()
{
	char str[100],ch;
	printf("enter the string and character to be deleted\n");
	gets(str);
	scanf("%c",&ch);
	delete_char(str,ch);
	printf("%s\n",str);
}
void delete_char(char *s,char ch)
{
	while(*s)
	{
		if(ch==*s)
			*str=*(str+1);
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
