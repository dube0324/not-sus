#include <bits/stdc++.h>
using namespace std;
bool isBalanced(string str)
{
    stack<char> s;
    char c;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '(' || str[i] == '[' || str[i] == '{')
        {
            s.push(str[i]);
            continue;
        }
        if (s.empty())
            return false;
        switch (str[i])
        {
        case ')':
            c = s.top();
            s.pop();
            if (c == '{' || c == '[')
                return false;
            break;
        case '}':
            c = s.top();
            s.pop();
            if (c == '(' || c == '[')
                return false;
            break;
        case ']':
            c = s.top();
            s.pop();
            if (c == '(' || c == '{')
                return false;
            break;
        }
    }
    return (s.empty());
}
int main()
{
    string str;
    cout << "Enter the string:\n";
    cin >> str;
    isBalanced(str)?cout<<"Balanced":cout<<"Not balanced";
}