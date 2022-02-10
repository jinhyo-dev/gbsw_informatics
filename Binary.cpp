#include<iostream>
#include<stack>
using namespace std;
stack<int> s;
int main()
{
  int n;
  cin >> n;
  while (n)
  {
    s.push(n%2);
    n/=2;
  }
  while (!s.empty())
  {
    cout << s.top();
    s.pop();
  }
  
  
}