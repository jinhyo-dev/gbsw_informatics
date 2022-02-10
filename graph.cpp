#include <iostream>
using namespace std;
int v, e, G[10][10];

int main()
{
    int v1, v2;
    cin >> v >> e;

    for (int i = 1; i <= e; i++)
    {
        cin >> v1 >> v2;
        G[v1][v2] = G[v2][v1] = 1;
    }

    for (int i = 1; i <= v; i++)
    {
        for (int j = 1; j <= v; j++)
            cout << G[i][j] << ' ';
        cout << endl;
    }
}