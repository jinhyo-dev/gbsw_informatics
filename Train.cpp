#include <iostream>
#include <vector>
#include <stack>
using namespace std;
stack<int> s;
vector<char> v;

int main()
{
	int i, j=1, n, m;
	cin >> n;
	for(i=1; i<=n; i++)
  {
    cin >> m;
		s.push(m);
		v.push_back('S');
		while(1)
    {
			if(s.empty())	  break;
			if(j == s.top())
      {
				s.pop();
				j++;
				v.push_back('P');
			} 
      else 	break;
		}
	}
	if(!s.empty())
  {
		cout << "impossible" <<  endl;
	} else 
  {
		for(i=0; i<v.size(); i++) cout << v[i];
	}	
}