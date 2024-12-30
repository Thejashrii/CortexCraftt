#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdio_ext.h>
#define no_of_chars 256
int longestuniquesubstring(char *s)
{
	int n=strlen(s);
	int max=0,start=0;
	int lastindex[no_of_chars];

	for(int i=0;i<no_of_chars;i++)
	{
		lastindex[i]=-1;
	}

	//Travserse the string
	for(int i=0;i<n;i++){
		//update the startindex if char already appeared 
		if(lastindex[s[i]] >= start){
			start = lastindex[s[i]]+1;
		}

		//update the last index of the current char
		lastindex[s[i]]=i;
		 
		//update maxlen if we found a longer substring


		int currlen = i - start + 1;
		if(currlen>max) max = currlen;
	}
	return max;
}
char *getString()
{
	int i=0;
	char *p=NULL;
	do{
	p=realloc(p,(i+1)*sizeof(char));
	if(p==NULL){
		printf("Memory reallocation failed\n");
		free(p);
		exit(1);
	}
	p[i]=getchar();
	}while(p[i++]!='\n');
	p[i-1]='\0';
	return p;
}

int main()
{
	char *str=NULL;
	puts("enter the string");
	__fpurge(stdin);
	str=getString();
	printf("%d is the length of the longest substring \n",longestuniquesubstring(str));
	
	free(str);
	return EXIT_SUCCESS;

}

