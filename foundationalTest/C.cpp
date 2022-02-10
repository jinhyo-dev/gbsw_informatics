#include <iostream>
using namespace std;

int main()
{
  int n;
  for (int i = 0; i < 3; i++)
  {
    cin >> n;
    if (n % 2 == 0)
      cout << "even" << endl;
    else 
      cout << "odd" << endl;
  }
}