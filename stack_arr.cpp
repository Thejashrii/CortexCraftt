#include<bits/stdc++.h>
using namespace std;
class Stack{
	int size;
	int *arr;
	int top;
	public:Stack()
	       {
		       top=-1;
		       size=1000;
		       arr=new int[size];
	       }
	       void push(int x){
		       arr[++top]=x;
	       }
	       int pop()
	       {
		       return arr[top--];
	       }
	       int Top(){
		       return arr[top];
	       }
	       int Size()
	       {
		       return top+1;
	       }
};

int main()
{
	Stack s;
	s.push(4);
	s.push(5);
	s.push(8);
	cout<<"Top of Stack is before deleting any element"<<s.Top()<<endl;
	cout<<s.Size()<<endl;
	cout<<s.pop()<<endl;
	cout<<s.Top()<<endl;
}

