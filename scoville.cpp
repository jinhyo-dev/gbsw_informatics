#include <iostream>
#include <queue>
using namespace std;

int main()
{
  priority_queue<int, vector<int>, greater<int>> pq;
  int k, n, num, tmp, cnt = 0;
  cin >> k >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> num;
    pq.push(num);
  }
  while (1)
  {
    if (pq.top() < k)
    {
      tmp = pq.top();
      pq.pop();
      tmp += (pq.top() * 2);
      pq.pop();
      pq.push(tmp);
      cnt++;
    }
    else
    {
      cout << cnt;
      break;
    }
  }
}