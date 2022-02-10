#include<iostream>
#include<deque>
#include<string>
using namespace std;
deque<int> dq;
int main()
{
  int n,k;
  string str;
  cin >> n;
  for (int i = 0; i < n ; i++)
  {
    cin >> str;
    if (str == "push_front")
    {
      cin >> k;
      dq.push_front(k);
    }

    else if (str == "push_back")
    {
      cin >> k;
      dq.push_back(k);
    }

    else if (str == "pop_front")
    {
      if (dq.empty())   cout << "-1" << endl;
      else 
      {
        cout << dq.front() << endl;
        dq.pop_front();
      }
    }

    else if (str == "pop_back")
    {
      if (dq.empty())   cout << "-1" << endl;
      else 
      {
        cout << dq.back() << endl;
      dq.pop_back();
      }
    }

    else if (str == "size")
    {
      cout << dq.size() << endl;
    }

    else if (str == "empty")
    {
      if (dq.empty())   cout << "1" << endl;
      else cout << "0" << endl;
    }

    else if (str == "front")
    {
      if(dq.empty()) cout << "-1" << endl;
      else cout << dq.front() << endl;
    }

     else if (str == "back")
    {
      if(dq.empty()) cout << "-1" << endl;
      else cout << dq.back() << endl;
    }
    
  }
  
}