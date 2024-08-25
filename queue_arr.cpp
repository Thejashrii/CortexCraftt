#include<bits/stdc++.h>
using namespace std;
class Queue
{
	int maxsize;
	int *arr;
	int start,end,currsize;
	public:Queue()
	       {
		       start=end=-1;
		       currsize=0;;
		       arr=new int[16];
	       }
	       Queue(int maxsize)
	       {
		       (*this).maxsize=maxsize;
		       arr=new int[maxsize];
		       start=-1;
		       end=-1;
		       currsize=0;
	       }
	       void Enq(int x){
		       if(currsize==maxsize){
			       cout<<"Queue is full\nexiting..."<<endl;
			       exit(1);
		       }
		       if(end==-1){
			       start=0;
			       end=0;
		       }
		       else
			       end=(end+1)%maxsize;
		       arr[end]=x;
		       cout<<"element pushed is"<<x<<endl;
		       currsize++;
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

