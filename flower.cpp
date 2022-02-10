#include <iostream>
using namespace std;
int main()
{
  int S, N, slot[100001] = {};
  int start, end;
  cin >> S >> N;
  
  for (int i = 1; i <= N; i++)
  {
    cin >> start >> end;
    for (int j = start; j <= S; j += end)
      slot[j] = 1;
  }
  slot[S + 1] = 2;

  for (int i = 1; slot[i] != 2; i++)
    S -= slot[i];

  cout << S << endl;
}