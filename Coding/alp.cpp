#include<iostream>
#include<string.h>
using namespace std;
int main()
{
  char A[100];
  int B[26];
  for (int i = 0; i < 26; i++)
  {
    B[i] = -1;
  }
  cin >> A;
  for (int i = 0; i < strlen(A); i++)
  {
    B[A[i]-97]=i;
  }
  for (int i = 0; i < 26; i++)
  {
    /* code */
    cout << B[i] <<" ";
  }
}