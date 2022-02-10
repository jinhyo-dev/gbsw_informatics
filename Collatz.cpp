#include<iostream>
using namespace std;

int main()
{
  int cnt=0;
  long long n;
  cin >> n;
  while (n!=1)
  {
    if(n%2==0)  {
      n = n/2;
      cnt++;
    } else {
      n = (n*3)+1;
      cnt++;
    } 
  }
    if (cnt>499) cout << "-1";
    else cout << cnt;
}