#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int front=-1,rear=-1;
int arr[MAX];
void Enq(int x)
{
	if(front==-1) front=0;

	arr[++rear]=x;
}

int Deq()
{
	int temp=0;
	temp=arr[front];
	front++;
	if(front==rear+1)
		front=rear=-1;
	return temp;
}

int Top()
{
	return arr[front];
}
int main()
{
	char ch;
	int data;
	while(1)
	{
		printf("1.Enq\n2.Deq\n3.Top()\n4.Exit\n");
		printf("enter your choice\n");
		__fpurge(stdin);
		scanf("%c",&ch);
		switch(ch)
		{
			case '1':if(rear==MAX-1)
					 puts("Queue is full");
				 else{
					 printf("enter the element to push\n");
				 scanf("%d",&data);
				 Enq(data);
				 }
				 break;
			case '2':if(front==-1) puts("Queue is empty");
				 else{
					 printf("Poped element is %d\n",Deq());
				 }
				 break;
			case '3':if(front==-1) puts("Queue is empty");
				 else printf("top most element is %d\n",Top());
				 break;
			case '4':exit(0);
		}
	}
}



