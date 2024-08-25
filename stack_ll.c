#include<stdio.h>
#include<stdlib.h>

typedef struct Stack
{
	int data;
	struct Stack *link;
}STACK;

STACK *top;
void push(int d)
{
	STACK *newnode=NULL;
	newnode=calloc(1,sizeof(STACK));
	if(newnode==NULL)
		printf("Stack is full\n");
	else{
		newnode->data=d;
		newnode->link=top;
		top=newnode;
	}
}
int pop()
{
	STACK *temp=NULL;
	int val;
	temp=top;
	top=top->link;
	val=temp->data;
	free(temp);
	return val;
}

int Peek()
{
	return top->data;
}

int main()
{
	int val,choice;
	while(1)
	{
		printf("1.Push 2.Pop 3.Peek 4.Exit\n");
		printf("enter your choice\n");
		scanf("%d",&choice);
		  switch(choice)
	  {
		  case 1: printf("enter the data to be pushed\n");
			  scanf("%d",&val);
			  push(val);
			  break;
		case 2: if(top==NULL)
				printf("Stack is empty\n");
			else
		{printf("data poped is %d\n",pop());
		}
			break;

		case 3: if(top==NULL)
				printf("Stack is empty\n");
			else
		{printf("data pointed by the top of the stack is  %d\n",Peek());
		}
			break;
		case 4: exit(0);
	  }
	}
}
