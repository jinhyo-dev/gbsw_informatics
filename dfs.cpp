#include <iostream>
#include <vector>
using namespace std;

int v, e;
vector<int> g[20];
bool visited[20]; // bool = 0 or 1만 값에 들어간다.

void dfs(int s)
{
    int next;
    visited[s] = 1;
    cout << s << " ";
    for (int i = 0; i < g[s].size(); i++)
    {
        next = g[s][i];

        if (visited[next] == 0)
            dfs(next);
    }
}

int main()
{
    int v1, v2;
    cin >> v >> e;

    for (int i = 1; i <= e; i++)
    {
        cin >> v1 >> v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }
    dfs(1);
}
