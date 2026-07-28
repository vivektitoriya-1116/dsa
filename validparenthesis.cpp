#include <iostream>
#include <stack>
#include <string>
using namespace std;
bool ismatched(char a,char b);
bool isbalanced(string &str)
{
    stack<char> s;
    for (char x : str)
    {
        if (x == '(' || x == '{' || x == '[')
        {
            s.push(x);
        }
        else
        {
            if (s.empty())
                return false;
            else if (ismatched(s.top(), x))
                s.pop();
            else 
                return false;
        }
    }
    return s.empty();
}
bool ismatched(char a,char b)
{
    return a=='('&&b==')'||a=='['&&b==']'||a=='{'&&b=='}';
}
int main()
{ 
    string str;
    
    getline(cin,str);
    if (isbalanced(str))
    cout<<"balanced";
    else
    cout<<"not balanced";
    return 0;
}