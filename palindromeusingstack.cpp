#include<bits/stdc++.h>
using namespace std;
void isPalindrome(string str)
    {
        stack<char> s;
        int flag=0,i,length=str.length();
        int mid=length/2;
        for(i=0;i<mid;i++)
            s.push(str[i]);
        if(length%2==1)
            i++;
        char c;
        while(str[i]!='\0')
            {
                c=s.top();
                s.pop();
                if(c!=str[i])
                    {
                        flag=1;
                        break;
                    }
                i++;
            }
    flag?cout<<"Not a palindrome":cout<<"Palindrome";
    }
int main()
    {
        string str;
        cout<<"Enter string: \n";
        cin>>str;
        isPalindrome(str);
    }