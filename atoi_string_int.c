#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<stdio_ext.h>
int main()
{
	char *p,*q,*str1,*str2;
	int x,y;
	p=(char*)calloc(40,sizeof(char));
	q=(char*)calloc(40,sizeof(char));
	printf("enter the string1\n");
	fgets(p,40,stdin);
	printf("enter the string2\n");
	fgets(q,40,stdin);
	p[strcspn(p, "\n")] = '\0';
        q[strcspn(q, "\n")] = '\0';
	str1=p;
	str2=q;
	while(*str1)
	{
		if(!(isdigit(*str1)))
			break;
		str1++;
	}
	while(*str2)
        {
                if(!(isdigit(*str2)))
                        break;
                str2++;
        }
	if(*str1!='\0' || *str2!='\0')
	{
		printf("input str1, str2 is invalid\n");
		exit(0);
	}
	else
	{
		str1=p;
		str2=q;
		sscanf(str1,"%d",&x);
		sscanf(str2,"%d",&y);
		printf("%d\n",x+y);
		printf("%d\n",x-y);
	}
}

			


