#include <iostream>
using namespace std;

int main()
{
    int tmp, n, a[1000] = {};
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j > 0; j++)
        {
            if (a[j] < a[j - 1])
            {
                tmp = a[j];
                a[j] = a[j - 1];
                a[j - 1] = tmp;
            }
            else
                break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << ' ';
    }
}