#include <iostream>
using namespace std;

int main()
{
    int i, n;
    cin >> n;

    for (i = 1;; i++)
    {
        if (n - i <= 0)
            break;
        n -= i;
    }

    if (i % 2 == 1)
    {
        cout << i - n + 1 << '/';
        cout << n;
    }
    else
    {
        cout << n << '/';
        cout << i - n + 1;
    }
}