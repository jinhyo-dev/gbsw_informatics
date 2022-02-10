#include <iostream>
#include <cstring>
using namespace std;

int main()
{
  int n, k, cnt;
  string str;
  cin >> n >> k >> str;
  for (int i = 0; i < n; i++)
  {
    if (str[i] == 'P')
    {
      for (int j = i - k; j <= i + k; j++)
      {
        if (str[j] == 'H')
        {
          cnt ++;
          str[j] = 0;
          break;
        }
      }
    }
  }
  cout << cnt << endl;
}