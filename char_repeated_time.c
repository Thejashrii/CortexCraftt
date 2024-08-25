#include<stdio.h>
#include<string.h>
int main()
{
	 char str[50],ch;
	 printf("enter the string\n");
	 fgets(str,sizeof(str),stdin);
	 printf("enetr the chararter\n");
	 scanf("%c",&ch);
	 int cnt=0,i=0;
	 while(str[i])
	 {
		 if(str[i]==ch){
			 cnt++;
		 }
		 i++;
	 }
	 if(cnt==0)printf("Not found\n");
	 else{
		 printf("%d\n",cnt);
	 }
}

