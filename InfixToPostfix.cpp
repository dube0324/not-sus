#include<iostream>
using namespace std;
char stack[100],top=-1;
void push(char ch)
	{
		top++;
		stack[top]=ch;
	}
void pop()
	{
		top--;
	}
char peek()
	{
		return stack[top];
	}
bool isEmpty()
	{
		if(top==-1) return 1;
		else		return 0;
	}
bool isFull()
	{
		if(top==99) return 1;
		else		return 0;
	}
int prec(char c) {
	if(c == '^')
		return 3;
	else if(c == '/' || c=='*')
		return 2;
	else if(c == '+' || c == '-')
		return 1;
	else
		return -1;
}
string Reverse(string str)
	{
		string rev;
		for(int i=str.length();i>=0;i--)
			{
				if(str[i]=='(')
					rev+=')';
				else if(str[i]==')')
					rev+='(';
				else
					rev+=str[i];
			}
		return rev;
	}
string InfixToPostfix(string str)
	{
		string output;
		for(int i=0;i<str.length();i++)
			{
				if(str[i]>='a'&&str[i]<='z'||str[i]>='A'&&str[i]<='Z'||str[i]>='0'&&str[i]<='9')
					output+=str[i];
				else if(str[i]=='(')
					push(str[i]);
				else if(str[i] == ')') 
				{
					while(peek() != '(')
					{
						output += peek();
						pop();
					}
					pop();
				}
				else 
				{
					while(!isEmpty() && prec(str[i]) <= prec(peek())) 
					{
						output += peek();
						pop();
					}
					push(str[i]);
				}
			}
		while(!isEmpty()) 
			{
				output += peek();
				pop();
			}
		return output;
	}
void InfixToPrefix()
	{
		string str,rev;
		cout<<"Enter the expression: "<<endl;
		cin>>str;
		cout<<Reverse(InfixToPostfix(Reverse(str)))<<endl;
	}
int main()
	{
		int ch;
		do
		{
			int choice;
			string str;
			cout<<"Enter choice: "<<endl;
			cout<<"1.Infix to postfix"<<endl;
			cout<<"2.Infix to prefix"<<endl;
			cin>>choice;
	//		(((a+b)*c+d-e)/(f+g)-(h+j)*(k-l))/(m-n)
	//		a+b*c+d*e
			switch(choice)
			{
				case 1:
					cout<<"Enter the expression: "<<endl;
					cin>>str;
					cout<<InfixToPostfix(str)<<endl;
					break;
				case 2:
					InfixToPrefix();
					break;
				default:
					cout<<"Invalid choice"<<endl;
					break;
			}
		cout<<"Press 9 to exit"<<endl;
		cin>>ch;
		}
		while(ch!=9);
	}
