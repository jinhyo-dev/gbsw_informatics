#include <iostream>
#include <queue>
using namespace std;
int main()
{
  priority_queue<int, vector<int>, greater<int>> pq; //less로 하면 최소히프

  int n, t;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> t;
    pq.push(t);
  }

  while (!pq.empty())
  {
    cout << pq.top() << " ";
    pq.pop();
  }
}