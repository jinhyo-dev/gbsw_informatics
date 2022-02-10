#include<iostream>
using namespace std;
int main()
{
  int bag = 0, N;
  cin >> N;
  while (N >= 0)
  {
    if (N % 5 == 0)
    {
      bag += N/5;
      cout << bag << endl;
      break;
    }
    else
    {
      N -= 3;
      bag ++;
    }
  }
}