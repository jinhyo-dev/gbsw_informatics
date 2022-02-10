#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
  int n = 0, num[100000] = {0,};
  int total = 0;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> num[i];
    total += num[i];
  }

  sort(num, num + n);

  double tt = double(total);
  double avg = double(tt /n);
    
  cout << "총점: " << total << endl;
  printf("평균: %.2lf\n", avg);
  cout << "최고점: " << num[n-1] << endl;
  cout << "최저점: " << num[0] << endl;
}