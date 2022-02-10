#include<iostream>
#include<deque>
using namespace std;
deque<int> dq;

int main()
{
  dq.push_back(1);
  dq.push_back(2);
  dq.push_front(11);
  dq.push_front(22);

  for (int i = 0; i < dq.size(); i++)
  {
    cout << dq[i] << " " ;
  }
  
}