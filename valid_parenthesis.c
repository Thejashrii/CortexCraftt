#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 30

int top=-1;
char arr[MAX];
void push(char s)
{
	arr[++top]=s;
}

char pop()
{
	return arr[top--];
}

char Peek()
{
	return arr[top];
}

int main()
{
	char str[30],ch1;
	printf("enter the string\n");
	fgets(str,sizeof(str),stdin);
	int l=strlen(str);
	str[l-1]=strcspn(str,"\0");
	printf("%s\n",str);
	int i=0;
	while(str[i])
	{
		if(str[i]=='(' || str[i]=='[' || str[i]=='{')
			push(str[i]);
		else if(str[i]==')' || str[i]==']' || str[i]=='}'){

			ch1=pop();
			if((str[i]==')' && ch1!='(') || (str[i]==']' && ch1!='[') || (str[i]=='}' && ch1!='{')) break;
		}
		i++;
	}
	if(str[i]=='\0' && top==-1) puts("True");
	else puts("False");

}

