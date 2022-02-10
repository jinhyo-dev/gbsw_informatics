#include<iostream>
using namespace std;
int v,e;
int g[1000][1000];
int main()
{
    int v1, v2;
    cin >> v >> e; //w 선언 = 가중치

    for (int i = 1; i <= e; i++)
    {
        cin >> v1 >> v2; //w 입력
        g[v1][v2] = 1; // 가중치 표현 = 1 -> W 변경
        g[v2][v1] = 1;
    }
    

    for (int i = 1; i <= v; i++)
    {
        for (int j = 1; j <= v; j++)
            cout << g[i][j] << " ";
        cout << endl;
    }
    
}