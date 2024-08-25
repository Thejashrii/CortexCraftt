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
	char *s=str;
	int vowel=0,consonants=0;
	while(*s)
	{
	if((*s>='a' && *s<='z') || (*s>='A' && *s<='Z'))
	{

	switch(*s)
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':vowel++;
			 break;
		default: consonants++;
	}
	}
	s++;
	}
	printf("%d\n%d\n",vowel,consonants);
}

