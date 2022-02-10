#include<iostream>
using namespace std;
int main()
{
  int a[10] = {},b[10] = {};
  int A,B;
  scanf("%1d%1d%1d", &a[0], &a[1], &a[2]);
  scanf("%1d%1d%1d", &b[0], &b[1], &b[2]);

  A = (a[2] * 100) +(a[1]*10) + (a[0]);
  B = (b[2] * 100) + (a[1]*10) + (a[0]);
  
  if (A>B)   cout << A << endl;
  else  cout << B << endl;
}