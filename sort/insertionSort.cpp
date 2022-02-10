#include <iostream>
using namespace std;

int main()
{
    int tmp = 0, n, a[1000] = {};
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        int j = i;
        while (j > 0 && a[j - 1] > a[j])
        {
            tmp = a[j];
            a[j] = a[j - 1];
            a[j - 1] = tmp;
            j--;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << ' ';
    }
}