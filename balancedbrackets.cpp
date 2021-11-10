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
bool empty()
	{
		if(top==-1)
			return 1;
		else
			return 0;
	}
bool isBalanced(string str)
{
    char c;
    for (int i=0; i<str.length();i++)
    {
        if (str[i]=='('||str[i]=='['||str[i] =='{')
        {
            push(str[i]);
            continue;
        }
        if (empty())
            return 0;
        switch (str[i])
        {
        case ')':
            c = s[top];
            pop();
            if (c=='{'||c=='[')
                return 0;
            break;
        case '}':
            c = s[top];
            pop();
            if (c=='('||c =='[')
                return 0;
            break;
        case ']':
            c=s[top];
            pop();
            if(c=='('||c=='{')
            	return 0;
            break;
        }
    }
    return (empty());
}
int main()
{
    string str;
    cout << "Enter the string: ";
    cin >> str;
    isBalanced(str)?cout<<"Balanced":cout<<"Not balanced";
}
