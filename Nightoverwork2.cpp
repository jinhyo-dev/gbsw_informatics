#include <vector>
#include<iostream>
#include <queue>
using namespace std;

long long solution(int n, vector<int> works) {
    std::priority_queue<int> q(works.begin(), works.end());
    for (int i = 0; i < n; i++) {
        if (q.top() > 0) {
  
            int tmp = q.top();
            q.pop();
            q.push(tmp-1);
        }
    }
    long long answer = 0;
    while(!q.empty()) {
        answer += (long long)q.top() * (long long)q.top();
        q.pop();
    }
    return answer;
}

int main()
{
  int a,b,i=-1;
  vector<int> v;
  cin >> a;
  do 
  {
    i++;
    cin >> b;
    v.push_back(b);
  }while (v[i]!=0);
  
  cout << solution(a,v);
}
