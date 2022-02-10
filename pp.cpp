#include <iostream>
#include <string>
#include <stack>
using namespace std;
stack<char> s;

int main()
{
  int n;
  cin >> n;
  while (n > 0)
  {
    n--;
    string str;
    cin >> str;

    string answer = "YES";
    for (int i = 0; i < str.length(); i++)
    {
      if (str[i] == '(')
        s.push(str[i]);

      else if (!s.empty() && str[i] == ')' && s.top() == '(')
        s.pop();

      else
      {
        answer = "NO";
        break;
      }
    }
    if (!s.empty())
      answer = "NO";
    cout << answer << endl;
  }
}