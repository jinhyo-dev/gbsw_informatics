#include <iostream>
using namespace std;
int main()
{
    int n, m, max = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> m;
        if (max < m)
            max = m;
    }
    cout << max;
}