#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void reverse_word(char *s,char *e)
{
	char temp;
	while(s<e)
	{
		temp=*s;
		*s=*e;
		*e=temp;
		s++;
		e--;
	}
}


int main()
{
	char *str;
	str=(char*)calloc(40,sizeof(char));
	printf("enter the string\n");
	fgets(str,40,stdin);
	str[strcspn(str,"\n")]='\0';
	char *p;
	p=str;
	char *start;
	start=str;
	while(*p)
	{
		if(*p==' ')
		{
			reverse_word(start,p-1);
			start=p+1;
		}
		p++;
	}
	reverse_word(start,p-1);
	printf("%s\n",str);
}

