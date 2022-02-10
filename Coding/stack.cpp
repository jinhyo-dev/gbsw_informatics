#include<iostream>
#include<stack>
#include<string>
using namespace std;
stack<int> s;
string str;
int main()
{
  int a;
  cin >> a;
  for (int i = 0; i < a; i++)
  {
    cin >> str;
    int n;
    if (str == "push")
    {
      cin >> n;
      s.push(n);
    }

    else if (str == "top")
    {
      if (s.empty())
      cout << -1 << endl;
      else 
      cout << s.top() << endl;
    }

    else if (str == "size")
    {
      cout << s.size() << endl;
    }

    else if (str == "empty")
    {
      if (s.empty())
      cout << 1 << endl;
      else 
      cout << 0 << endl;
    }
    
    else if (str == "pop") 
    {
      if (s.empty())
      cout << -1 << endl;
      else
      {
        cout << s.top() << endl;
        s.pop();
      }
    }

    
    
  
    
  }
  
}