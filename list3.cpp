#include<iostream>
#include<list>
#include<string>
using namespace std;
list<int> lt;
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
      lt.push_front(k);
    }

    else if (str == "push_back")
    {
      cin >> k;
      lt.push_back(k);
    }

    else if (str == "pop_front")
    {
      if (lt.empty())   cout << "-1" << endl;
      else 
      {
        cout << lt.front() << endl;
        lt.pop_front();
      }
    }

    else if (str == "pop_back")
    {
      if (lt.empty())   cout << "-1" << endl;
      else 
      {
        cout << lt.back() << endl;
        lt.pop_back();
      }
    }

    else if (str == "size")
    {
      cout << lt.size() << endl;
    }

    else if (str == "empty")
    {
      if (lt.empty())   cout << "1" << endl;
      else cout << "0" << endl;
    }

    else if (str == "front")
    {
      if(lt.empty()) cout << "-1" << endl;
      else cout << lt.front() << endl;
    }

     else if (str == "back")
    {
      if(lt.empty()) cout << "-1" << endl;
      else cout << lt.back() << endl;
    }
    
  }
  
}