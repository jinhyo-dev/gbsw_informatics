#include<iostream>
#include<stack>
#include<string>
using namespace std;
stack<char> s;

int main()
{
  string word;
  cin >> word;

  for (int i = 0; i < word.length(); i++)
  {
    if (word[i] >= 60)    
    cout << word[i];
    else
    {
      if (word[i] == '*' || word[i] == '/')
      {
        if (!s.empty())
        {
          if (s.top() == '*' || s.top() == '/')
          {
            cout << s.top();
            s.pop();
          }
          
        }
        s.push(word[i]);
      } else if (word[i] == '+' || word[i] == '-')
      {
        if (s.empty())
        {
          s.push(word[i]);
        } else
        {
          while (!s.empty())
          {
            if (s.top() == '(') break;
            cout << s.top();
            s.pop();
          }
          s.push(word[i]);
        }
      } else if (word[i] == '(')     s.push(word[i]);
        else if(word[i] == ')')     
        {
          while (s.top() != '(')
          {
            cout << s.top();
            s.pop();
          } s.pop();
        }   
        else 
        {
        cout << "impossible" << endl;
        exit(1);
        }
    }
  }
  while (!s.empty())
  {
    cout << s.top();
    s.pop();
  }
  
  
}