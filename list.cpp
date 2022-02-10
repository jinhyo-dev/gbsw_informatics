#include<list>
#include<iostream>
#include<vector>
using namespace std;
list<int> lt;
list<int> :: iterator iter;
vector<int> v;
vector<int> :: iterator iter2;

int main()
{
  lt.push_back(1);
  lt.push_back(2);
  lt.push_back(3);
  lt.push_back(4);
  v.push_back(1);
  v.push_back(2);
  v.push_back(3);
  v.push_back(4);

  for (int i = 0; i < 4 ; i++) //리스트는 이 형식으로 출력이 불가
  {
    cout << v[i] << " ";
  }
  for (iter = lt.begin(); iter != lt.end() ; iter++)
  {
    cout << *iter << " ";
  }
  printf("%d ",lt.begin()); //주소 값
  for (iter2 = v.begin() ; iter2 != v.end() ; iter2++)
  {
    cout << *iter2 << " ";
  }
  
  
}