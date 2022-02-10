#include <iostream>
using namespace std;

int main()
{
    int a = 1, n, cnt = 0, i;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        a += 6 * i;
        if (n <= a)
        {
            cout << i + 1;
            break;
        }
    }
}