#include<iostream>
#include<queue>
#include<string>
using namespace std;
queue<int> q;
int main()
{

  int a;
  string str;

  cin >> a;
  for (int i = 0; i < a; i++)
  {
    cin >> str;
    int n;
    if (str == "push")
    {
      cin >> n;
      q.push(n);
    }

    else if (str == "front")
    {
      if (q.empty())
      cout << -1 << endl;
      else 
      cout << q.front() << endl;
    }

    else if (str == "size")
    {
      cout << q.size() << endl;
    }

    else if (str == "empty")
    {
      if (q.empty())
      cout << 1 << endl;
      else 
      cout << 0 << endl;
    }
    
    else if (str == "pop") 
    {
      if (q.empty())
      cout << -1 << endl;
      else
      {
        cout << q.front() << endl;
        q.pop();
      }
    }
    else if (str == "back")
    {
      if (q.empty())
      {
        cout << -1 << endl;
      }
      cout << q.back() << endl;
      
    }
  }
}
