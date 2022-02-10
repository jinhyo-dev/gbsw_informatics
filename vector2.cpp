#include<iostream>
#include<vector>
using namespace std;

int main()
{
  int x,n;
  int sum;
  vector<int> v;

  cin>>x>>n;
  sum=x;
  for (int i = 0; i < n; i++)
  {
    v.push_back(sum);
    sum +=x;
    cout << v.at(i) << " ";
  }
  
}