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

void pop()
{
	int ele;
	if(isEmpty())
	{
		cout<<"Stack is empty";
	}
	else
	{
		ele=stack[top];
		top--;
		cout<< ele<<endl;
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

void peek()
{
	if(isEmpty())cout<<"Stack is Empty";
	else	
	cout<<stack[top]<<endl;
}
int main()
{
	push(5);
	push(4);
	push(3);
	push(1);
	push(7);
	cout<<"calling of peek function"<<endl;
	peek();
    cout<<"calling of traverse function"<<endl;
	traverse();
	cout<<"calling of pop function"<<endl;
	pop();
	pop();
	cout<<"traverse funciton"<<endl;
	traverse();
}
