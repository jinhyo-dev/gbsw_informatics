#include <iostream>
#include <queue>
using namespace std;
int main()
{
  priority_queue<int, vector<int>, greater<int>> min; //less로 하면 최소히프
  priority_queue<int, vector<int>, less<int>> max;

  int t;
  for (int i = 1; i <= 10; i++)
  {
    cin >> t;
    max.push(t);
    min.push(t);
  }

  for (int i = 0; i < 3; i++)
  {
    cout << "최대값 : " << max.top() << endl;
    max.pop();
  }

  for (int i = 0; i < 3; i++)
  {
    cout << "최솟값 : " << min.top() << endl;
    min.pop();
  }
}