#include<string.h>
#include<stdlib.h>
#include<stdio_ext.h>
int main()
{
        char **arrp,str[20];
        printf("enter the no of strings:\n");
        int n;
        scanf("%d",&n);
        arrp=(char**)malloc(n*sizeof(char*));
        for(int i=0;i<n;i++)
        {
                printf("enter the string:\n");
                __fpurge(stdin);
                gets(str);
                arrp[i]=(char*)malloc(strlen(str+1));
                strcpy(arrp[i],str);
        }
        printf("array of pointers elements before sorting are\n");
        for(int i=0;i<n;i++)
                printf("%s\n",arrp[i]);
	char *temp;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(strcmp(arrp[i],arrp[j])>0)
			{
				temp=arrp[i];
				arrp[i]=arrp[j];
				arrp[j]=temp;
			}
		}
	}
	printf("array elements after sorting\n");
	for(int i=0;i<n;i++)
                printf("%s\n",arrp[i]);
        for(int i=0;i<n;i++)
                free(arrp[i]);
        free(arrp);
} 
