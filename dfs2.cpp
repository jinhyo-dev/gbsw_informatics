#include "iostream"
#include "vector"
using namespace std;

vector<int> v[6];
int main()
{
    int v, e, v1, v2;
    cin >> v >> e;
    for (int i = 0; i < e; i++)
    {
        cin >> v1 >> v2;
        v[v1].push_back(v2);
        v[v2].push_back(v1);
    }
}