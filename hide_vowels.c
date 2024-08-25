#include<stdio.h>
#include<string.h>
int check_vowel(char *p,int i)
{
	if(p[i]=='a'||p[i]=='e'||p[i]=='o'||p[i]=='u'||p[i]=='i'||p[i]=='A'||p[i]=='E'||p[i]=='I'||p[i]=='O'||p[i]=='U'){
		if(p[i+1]=='a'||p[i+1]=='e'||p[i+1]=='i'||p[i+1]=='o'||p[i]+1=='u'||p[i+1]=='A'||p[i+1]=='E'||p[i+1]=='I'||p[i+1]=='O'||p[i+1]=='U'){
			p[i]='*';
			p[i+1]='*';
			return 1;
		}
	}
	return 0;
}
int main()
{
	 char str[50];
	 printf("enter the string\n");
	 fgets(str,sizeof(str),stdin);
	 int i=0,cnt=0;
	 while(str[i])
	 {
		 if(check_vowel(str,i))
		 {
			 cnt++;
			 i++;
		 }
		 i++;
	 }
	 if(cnt==0)printf("there is no pair of vowels to hide\n");
	 else{
		 printf("%s\n",str);
	 }
}

