#include<iostream>
using namespace std;
int t[100];
int main()
{
  int n;
  cin >> n;
  for (int i = 1; i <= n ; i++)
  {
    cin >> t[i];
  } //완전 2진트리 완성

  //완전 2진트리 출력
  for (int i = 1; i <= n ; i*=2)
  {
    for (int j = i; j <= 2*i-1 && j<=n ; j++)  cout <<t[j];
     cout << endl;
  }
  
}