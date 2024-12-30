#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>


int top = -1;
int *arr = NULL;
typedef struct Node
{
	int data;
	struct Node *next;
}NODE;

bool ispalindrome(NODE *head)
{
	NODE *temp = head;
	
	 arr = calloc(100,sizeof(int));
	 if(arr == NULL){
		 printf("Memory allocation failed\n");
		 return false;
	 }
	while(temp)
	{
		arr[++top] = temp->data;
		temp  = temp->next;
	}

	temp = head;

	while(temp)
	{
		if(temp->data != arr[top])
		{
			free(arr);
			return false;
		}
		top--;
		temp = temp->next;
	}
	free(arr);
	return true;
	

}

NODE * Add(NODE *head)
{
	NODE *newnode=NULL,*temp = NULL;
	//creation of new node
	
	newnode = calloc(1,sizeof(NODE));
	if(newnode == NULL)
	{
		printf("Node not craeted");
		return head;
	}

	//initialise node
	printf("enter the data\n");
	scanf("%d",&newnode->data);
	if(head == NULL)
	{
		head = newnode;
	}
	else
	{
		temp = head;
		while(temp->next)
			temp = temp->next;
		temp->next = newnode;
	}
	return head;
}

void Print(NODE *head)
{
	if(head == NULL)
		printf("List is empty\n");
	else
	{
		while(head)
		{
			printf("%d",head->data);
			head = head->next;
		}
	}
	printf("\n");
}


void clearbuffer(){
	int c;
	while((c = getchar()) != '\n' && c != EOF);
}

int main()
{
	NODE *head = NULL;
	char choice;
	while(1)
	{
		printf("A.Add P.Print E.Exit\n");
		printf("Enter the choice\n");
		scanf(" %c",&choice);
		//clearbuffer();
		switch(choice)
		{
			case 'A':head = Add(head);
				 break;
			case 'P':Print(head);
				 break;
			case 'E':if(ispalindrome(head))
	{
		printf("The linked list is palindrome\n");
	}
	else
	{
		printf("The linked list is not palindrome\n");
	}
	exit(0);
			default:printf("Invalid choice\n");
		}
	}

	return 0;
}

