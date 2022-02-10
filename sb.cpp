#include <iostream>
#include <vector>
#include <string>
using namespace std;
vector<char> v;

int t;
char num[10000];
int main() 

{
  cin >> t;
  for (int i = 0; i < t ; i++)
  {
    cin >> num;
    v.push_back(num[i]);
    cout << v.at(i);
    v.pop_back();
  }
}