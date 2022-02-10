#include<iostream>
#include<stack>
using namespace std;
stack <int> s;
int main()
{
  int cnt=0;
  int n,a;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> a;
    if (a == 0)
    {
      s.pop();
    }
    else
    {
      s.push(a);
    }
  }
  
  for (int i = 0; i <= s.size(); i++)
  {
    if(s.size()==0){
      break;
    }
    cnt += s.top();
    s.pop();
  }
  cout << cnt;
  
}