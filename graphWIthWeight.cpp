#include <iostream>
using namespace std;
int v, e, G[1000][1000];

int main()
{
    int v1, v2, w;
    cin >> v >> e;

    for (int i = 1; i <= e; i++)
    {
        cin >> v1 >> v2 >> w;
        G[v1][v2] = w;
    }

    for (int i = 1; i <= v; i++)
    {
        for (int j = 1; j <= v; j++)
            cout << G[v][j] << ' ';
        cout << endl;
    }
}