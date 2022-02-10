#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int n,k,cnt=0;
  int a,b,c;
 int solution(int n)
 {
 do
  {
    cin >> k;
    cnt += k;
  }while (k!=0);
  a= (cnt - n) / 3;  
  b = (cnt - n) % 3;
  if ( b == 1)      c = a*a + a*a +(a + 1) * (a+1);
  else if (b == 2)      c = a*a  +(a + 1) * (a+1)+(a + 1) * (a+1);
  else    c = a*a + a*a + a*a;

    return c;
 }

int main()
{
  cin >> n;
  printf("%d",solution(n));

}