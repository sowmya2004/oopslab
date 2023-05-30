#include<iostream>
using namespace std;
#define size 5
class stack
{
	int array[size],top;
	public:
	int init();
	void push();
	void pop();
	void display();
	void peek();
};
int main()
{
	stack s;
	s.init();
	int choice;
	while(1)
	{
		cout<<"***MENU***"<<"\n";
		cout<<"=========="<<"\n";
		cout<<"1.push"<<"\n"<<"2.pop"<<"\n"<<"3.display"<<"\n"<<"4.peek"<<"\n"<<"5.exit"<<"\n";
		cout<<"enter the operation to perform"<<"\n";
		cin>>choice;
		switch(choice)
		{
			case 1:s.push();
			break;
			case 2:s.pop();
			break;
			case 3:s.display();
			break;
			case 4:s.peek();
			break;
			case 5:exit(0);
			default:cout<<"invalid entry"<<"\n";
		}
	}
}
int stack::init()
{ 
	top=0;
	array[size]=0;
	return 0;
}
void stack::push()
{
	int x;
	if(top==size)
	{
		cout<<"stack is full"<<"\n";
	}
		cout<<"enter the number to insert into the stack"<<"\n";
		cin>>x;
		top++;
		array[top]=x;
}
void stack::pop()
{ 
	if(top==0)
	{
		cout<<"underflow"<<"\n";
	}
		top--;
}
void stack::display()
{ 	
	int i;
	if(top==0)
	{
		cout<<"stack is empty\n"<<"\n";
	}
		cout<<"elements present in the stack are"<<"\n";
		for(i=top;i>0;i--)
		{
			cout<<array[i]<<"\n";
		}
}
void stack::peek()
{
 	if(top==0)
 	{
 		cout<<"peek is not there"<<"\n";
 	}
 	else
 	{
 		cout<<array[top]<<"\n";
 	}
 
