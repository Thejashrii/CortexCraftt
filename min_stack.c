#include<stdio.h>
#include<stdlib.h>
int main()
{
	int min=INT_MAX;
	int data;
	char choice;
	while(1)
	{
		printf("1.push 2.pop 3.peek 4.getmin 5.exit\n");
		printf("enter your choice\n");
		__fpurge(stdin);
		scanf("%c",&choice);
		switch(choice)
		{

			case '1':printf("enter the element to push\n");
				 scanf("%d",&data);
				 if(min>data){
				 push((2*data)-min);
				 min=data;
				 }
				 else
					 push(data);
				 break;
			case '2':if(top==-1) printf("stack is empty\n");
				 else{
					 if(arr[top]<min){
						 min=((2*min)-arr[top]);
					 }
					 printf("%d\n",pop());
					 break;


		

