#include<iostream>
using namespace std;
int main()
{
  string str;
  int second = 0;
  cin >> str;
  for (int i = 0; i < str.size(); i++)
  {
    if (str[i] >= 87)
      second += 10;
    else
      second += (str[i]-65)/3+3;
  }
  cout << second << endl;
}