#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Student
{
	int roll;
	char name[20];
	struct Student *next;
}STUDENT;


STUDENT *Add(STUDENT *head)
{
	STUDENT *newnode = NULL;

	newnode = calloc(1,sizeof(STUDENT));
	if(newnode == NULL)
		printf("Node not created\n");
	else
	{
		printf("enter the roll\n");
		scanf("%d",&newnode->roll);
		printf("enter the name\n");
		scanf("%s",newnode->name);
		newnode->next = head;
		head = newnode;
	}
	return head;
}

void Print(STUDENT *head)
{
	while(head)
	{
		printf("%d %s\n",head->roll,head->name);
		head = head->next;
	}
}


STUDENT *AddLast(STUDENT *head)
{
	STUDENT *newnode = NULL;
	newnode = calloc(1,sizeof(STUDENT));
	if(newnode == NULL)
		printf("Node are created\n");
	else
	{
		printf("enter the roll\n");
		scanf("%d",&newnode->roll);
		printf("enter the name\N");
		scanf("%s",newnode->name);
		if(head == NULL){
                	printf("The list is empty\n");
        	}
        	else if(head->next == NULL)
        	{
                	head->next = newnode;
        	}
		else
		{
			STUDENT *temp = NULL;
			temp = head;
			while(temp)
			{
				temp = temp->next;
			}
			temp->next = newnode;
		}
	}
	return head;
}


STUDENT *Delete(STUDENT *head)
{
	STUDENT *temp;
	if(head == NULL)
		printf("List is empty\n");
	else if(head->next == NULL)
	{
		free(head);
		head = NULL;
	}
	else
	{
		temp = head;
		int data;
		printf("enter the roll no to delete the node\n");
		scanf("%d",&data);
		while(temp->next)
		{
			if(temp->roll == data)

		{


int main()
{
	STUDENT *head = NULL;
	char choice;
	while(1)
	{
		printf("A.Add D.Delete L.AddLast P.Print E.exit\n");
		printf("Enter your choice\n");
		__fpurge(stdin);
		scanf("%c",&choice);
		switch(choice)
		{
			case 'A':head = Add(head);
				 break;
			case 'D':head = Delete(head);
				 break;
			case 'P':Print(head);
				 break;
			case 'L':head = AddLast(head);
				 break;
			case 'E':exit(0);
		}
	}
}



		

