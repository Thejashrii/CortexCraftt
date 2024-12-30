#include<bits/stdc++.h>


using namespace std;


class Node
{
	public:
	int data;
	Node *next;

	Node(int data1,Node *next1){
		data = data1;
		next = next1;
	}

	Node(int data1){
		data = data1;
		next = NULL;
	}
};

bool ispalindrome(NODE *head)
{
	stack<int>st;

	NODE *temp = head;
	
	while(temp)
	{
		st.push(temp->data);
		temp  = temp->next;
	}

	temp = head;

	while(temp)
	{
		if(temp->data != st.top())
			return false;
		st.pop();
		temp = temp->next;
	}
	return true;
}



void Print(NODE *head)
{
	if(head == NULL)
		cout<<"List is empty"<<endl;
	else
	{
		while(head)
		{
			cout<<head->data<<" ";
			head = head->next;
		}
	}
	cout<<endl;
}


int main()
{
	NODE *head = NULL;
	char choice;
	while(1)
	{
		p
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

