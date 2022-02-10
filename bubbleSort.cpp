#include <iostream>
using namespace std;
int main()
{
    int n, k, tmp, cnt = 0;
    cin >> n;
    int a[1000] = {};

    for (int i = 0; i < n; i++)
    {
        cin >> k;
        a[i] = k;
        for (int j = 0; j < n; j++)
        {
            if (a[i] < a[j])
            {
                tmp = a[j];
                a[j] = a[i];
                a[i] = tmp;
                cnt++;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl
         << cnt;
}