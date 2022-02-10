#include <iostream>
#include <vector>
using namespace std;
vector<int> g[10];
int v, e;
int main()
{
    int v1, v2;
    cin >> v >> e;               //v=점, e=선
    for (int i = 1; i <= e; i++) //무방향 인접리스트로 표현 (by vecter)
    {
        cin >> v1 >> v2;
        g[v1].push_back(v2);
        //g[v2].push_back(v1);
    }

    //출력
    for (int i = 1; i <= v; i++)
    {
        cout << i << ": ";
        for (int j = 0; j < g[i].size(); j++)
        {
            cout << g[i][j] << " ";
        }
        cout << endl;
    }
}