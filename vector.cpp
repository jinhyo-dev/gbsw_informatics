#include<iostream>
#include<vector>
using namespace std;
vector<int> v;

int main()
{
  int tmp,n,sum=0;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
      cin >> tmp;
      v.push_back(tmp);
  }
  for (int i = 0; i < v.size(); i++)
  {
    cout << v.at(i)<<" ";
    sum += v.at(i);
  }
  cout << endl;
  cout <<"평균 : "<<sum/v.size()<<endl;
  cout << "총점 : " << sum << endl;
  
  
}