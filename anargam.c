#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	 char str[50],str1[50];
	 printf("enter the string\n");
	 fgets(str,sizeof(str),stdin);
	     printf("enter the string\n");
         fgets(str1,sizeof(str1),stdin);
	 int i=0,flag=0,j=0;
	 while(str[i])
	 {
		 flag=0,j=0;
		 while(str1[j])
		 {
			 if(str[i]==str1[j])
			 {
				 flag=1;
				 break;	 
			 }
			 j++;
		 }
		 if(flag==0){
			 printf("Not an anargam string\n");
			 return 0;
		 }
		 i++;
	 }

	 printf("Anargam string\n");
}

