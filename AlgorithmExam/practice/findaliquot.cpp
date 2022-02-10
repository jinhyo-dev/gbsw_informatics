#include <iostream>
using namespace std;
int main()
{
    int a, b, i, cnt = 0;
    cin >> a >> b;
    for (i = 1; i <= a; i++)
    {
        if (a % i == 0)
            cnt++;

        if (cnt == b)
            break;
    }
    if (i <= a)
        cout << i;
    else
        cout << "0";
}