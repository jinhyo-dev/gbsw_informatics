#include <iostream>
#include <algorithm>
using namespace std;

bool compare(int i, int j) 
{
  return j < i;
}

int main()
{
  int n, a[1000] = {};
  cin >> n;
  for (int i = 0; i < n; i++)
    cin >> a[i];

  sort(a, a +n, compare);

  for (int i = 0; i < n; i++)
    cout << a[i] << ' ';
  
}