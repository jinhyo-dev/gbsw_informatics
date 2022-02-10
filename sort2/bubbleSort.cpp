#include <iostream>
using namespace std;
int main()
{
    int a[1000] = {};
    int n, tmp = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i] < a[j])
            {
                tmp = a[j];
                a[j] = a[i];
                a[i] = tmp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << ' ';
    }
}