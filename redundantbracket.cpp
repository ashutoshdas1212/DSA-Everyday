#include <stack>
  
bool checkRedundantBrackets(string str)
{
    stack<char> s;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == '(')
        {
            s.push(str[i]);
        }
       
        if (str[i] == '+' || str[i] == '-' || str[i] == '/' || str[i] == '*')
        {
            s.push(str[i]);
        }
         if (str[i] == ')')
        {
            s.pop();
            if(s.top()=='(')
            {
                return true;
            }
            while(s.top()!='(')
            {
                s.pop();
            }
            s.pop();
            if(s.empty())
            {
                return false;
            }
        }
    }
return false;
    
}