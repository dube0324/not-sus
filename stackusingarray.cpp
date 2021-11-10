#include<iostream>
using namespace std;
int stack[100], n = 100, top = -1;
char ch;
bool isEmpty()
	{
		if(top==-1)
			return 1;
		else
			return 0;
	}
bool isFull()
	{
		if(top==99)
			return 1;
		else
			return 0;
	}
void push()
	{
		int t;
		cout<<"Enter the number of values you want to enter: ";
		cin>>t;
		while(t--)
		{
			cout<<"Enter value to be pushed: ";
			int num;
			cin>>num;
    		if (isFull())
        		{
        			cout<<"Stack overflow, cannot enter more values"<<endl;
        			break;
				}
    		else
    		{
        		top++;
        		stack[top] = num;
    		}
		}
	}
void pop()
	{
		if (isEmpty())
        cout << "Stack underflow" << endl;
    	else
    	{
        	cout << "The popped element is " << stack[top] << endl;
        	top--;
   		}
   }
void display()
	{
		if (top >= 0)
    	{
        	cout << "Stack elements are:";
        	for (int i = top; i >= 0; i--)
            	cout << stack[i] << " ";
        	cout << endl;
    	}
    else
        cout << "Stack is empty";
	}
void peek()
	{
		cout<<"Top element is: "<<stack[top]<<endl; 
	}
int main()
	{
		do
		{
			int choice;
			cout<<"Enter choice:\n";
			cout<<"1.Push into stack"<<endl;
			cout<<"2.Pop from stack"<<endl;
			cout<<"3.Display the stack"<<endl;
			cout<<"4.Peek top element of the stack"<<endl;
			cout<<"5.Check if stack is empty"<<endl;
			cout<<"6.Check if stack is full"<<endl;
			cin>>choice;
			switch(choice)
				{
					case 1:
						{
							push();
							break;
						}
					case 2:
						{
							pop();
							break;
						}
					case 3:
						{
							display();
							break;
						}
					case 4:
						{
							peek();
							break;
						}
					case 5:
						{
							isEmpty()?cout<<"Stack is empty"<<endl:cout<<"Stack is not empty"<<endl;
							break;
						}
					case 6:
						{
							isFull()?cout<<"Stack is full"<<endl:cout<<"Stack is not full"<<endl;
							break;
						}
				}
			cout<<"Do you want to exit? (y/n)"<<endl;
			cin>>ch;
		}
		
		while(ch!='y');
	}
