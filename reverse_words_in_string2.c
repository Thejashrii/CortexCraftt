#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void reverse_string(char *p1,int start,int end)
{
	char temp;
	while(start<end)
	{
		temp=p1[start];
		p1[start]=p1[end];
		p1[end]=temp;
		start++;
		end--;
	}
}

void reverse_word(char *start,char *end)
{
	char temp;
	while(start<end)
	{
		temp=*start;
		*start=*end;
		*end=temp;
		start++;
		end--;
	}
}

int main()
{
	char *str;
	str=(char*)calloc(40,sizeof(char));
	printf("enter thestring\n");
	fgets(str,40,stdin);
	str[strcspn(str,"\n")]='\0';
	char *p=str;
	reverse_string(p,0,strlen(str)-1);
	printf("%s\n",str);
	char *st=str;
	while(*p)
	{
		if(*p==32)
		{
			reverse_word(st,p-1);
			st=p+1;
		}
		p++;
	}
	printf("%s\n",str);
}
