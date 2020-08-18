#include<iostream>
using namespace std;
#define CAPACITY 5
int top=-1;
int stack[CAPACITY];

int isFull()
{
	if(top==CAPACITY-1)return 1;
	else return 0;
}

int isEmpty()
{
	if(top==-1)return 1;
	else return 0;
}

void push(int ele)
{
	if(isFull())
	{
		cout<<"Stack is full"<<endl;
	}
	else
	{
		top++;
		stack[top]=ele;
	}
}

int pop()
{
	int ele;
	if(isEmpty())
	{
		cout<<"Stack is empty";
	}
	else
	{
		return ele=stack[top--];
	}
}

void traverse()
{
	if(isEmpty())cout<<"Stack is Empty";
	else
	for(int i=0;i<=top;i++)
	{
		cout<<stack[i]<<endl;
	}
}

int peek()
{
	if(isEmpty())cout<<"Stack is Empty";
	else	
	   return stack[top];
}

int main()
{
	int choice;
	int ele;
	int item;
	int element;
	cout<<"1. Push"<<endl;
	cout<<"2. pop"<<endl;
	cout<<"3. peek"<<endl;
	cout<<"4. Traverse"<<endl;
	cout<<"5. Exit"<<endl<<endl;

	while(1)
	{
		
	cout<<"Enter the choice ";
	cin>>choice;
	
	switch(choice)
	{
		case 1: cout<<"enter the element ";
				cin>>ele;
				push(ele);
				break;
				
		case 2: pop();
				cout<<"popped element is"<<item<<endl;
				break;
				
		case 3: element=peek();
				cout<<"The top element is "<<element<<endl;
				break;
				
		case 4: cout<<"the elements are: "<<endl;
	         	traverse();
	         	break;
	         	
	    case 5: exit(0);      	
	}
  }
}
