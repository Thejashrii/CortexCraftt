#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int top=-1;
int arr[MAX];
void Push(int x)
{
	arr[++top]=x;
}

int Pop()
{
	return arr[top--];
}

int Peek()
{
	return arr[top];
}
int main()
{
	char ch;
	int data;
	while(1)
	{
		printf("1.Push\n2.Pop\n3.Peek\n4.Exit\n");
		printf("enter your choice\n");
		__fpurge(stdin);
		scanf("%c",&ch);
		switch(ch)
		{
			case '1':if(top==MAX-1)
					 puts("stack is full");
				 else{
					 printf("enter the element to push\n");
				 scanf("%d",&data);
				 Push(data);
				 }
				 break;
			case '2':if(top==-1) puts("stack is empty");
				 else{
					 printf("Poped element is %d\n",Pop());
				 }
				 break;
			case '3':if(top==-1) puts("stack is empty");
				 else printf("top most element is %d\n",Peek());
				 break;
			case '4':exit(0);
		}
	}
}



