#include<iostream>
using namespace std;
char s[100], top = -1;
void push(char ch)
	{
		top++;
        s[top] = ch;
	}
void pop()
	{
        top--;
    }
void isPalindrome(string str)
	{
//		stack<char> s;
        int flag=0,i,length=str.length();
        int mid=length/2;
        for(i=0;i<mid;i++)
            push(str[i]);
        if(length%2==1)
            i++;
        while(str[i]!='\0')
            {
            	char c;
                c=s[top];
            	pop();
                if(str[i]!=c)
                    {
                        flag=1;
                        break;
                    }
                i++;
            }
    flag?cout<<"String is not a palindrome":cout<<"String is a palindrome";
	}
int main()
	{
		string str;
		cout<<"Enter the string: ";
		cin>>str;
		isPalindrome(str);
	}
