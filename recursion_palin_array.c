#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>
bool reverse(char *p,int i)
{
	if(i>=strlen(p)/2) return true;
	if(p[i]!=p[strlen(p)-i-1]) return false;
	reverse(p,i+1);
}
	
int main()
{
	char str[40];
	printf("enter the string\n");
	gets(str);
	printf("%s\n",str);
	printf("%d\n",reverse(str,0));
}
