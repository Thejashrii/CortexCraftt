#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char str[70];int max=0,cnt=0,*a,i=0;
	char *ptr;
	ptr=str;
	printf("enter the string:");
	gets(str);
	for(ptr;ptr=strtok(ptr," ");ptr=NULL)
	{
		printf("%s\n",ptr);
		int l=strlen(ptr);
		a=(int *)realloc(a,(i+1)*sizeof(int));
		a[i++]=l;
	}
	for(int j=0;j<i;j++)
	{
		for(int k=j+1;k<i;k++)
		{
			if(a[j]==a[k])
			{
				++cnt;
			}
		}
		if(max<cnt)
		{
			max=a[j];
			printf("%d\n",max);
		}
	}
	printf("\n");
}


