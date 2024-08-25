#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define N 5
#define MAX_L 20
#define NEWLINE printf("\n");
int main()
{
	char str[N][MAX_L],temp[20];
	printf("enter the strings into array\n");
	for(int i=0;i<N;i++)
	{
		gets(str[i]);
	}
	NEWLINE;
	///selection sorting
	for(int i=0;i<N;i++)
	{
		for(int j=i+1;j<N;j++)
		{
			if(strcmp(str[i],str[j])>0)
			{
				strcpy(temp,str[i]);
				strcpy(str[i],str[j]);
				strcpy(str[j],temp);
			}
		}
	}
	//after sorting
	printf("array elements after sorting\n");
	for(int i=0;i<N;i++)
	{
		puts(str[i]);
	}
}

