#include<iostream>
#include<string.h>
using namespace std;
int main()
{
  int n;
  int m;
  char A[1000];
  cin >> m;
 
  for (int k = 0; k < m ; k++)
  { 
    cin >> n; 
    cin >> A;
    for (int i = 0; i < strlen(A); i++)
  {  
      for (int j = 0; j < n; j++)
      {
        cout << A[i];
      }
  }
  }
  
  
}