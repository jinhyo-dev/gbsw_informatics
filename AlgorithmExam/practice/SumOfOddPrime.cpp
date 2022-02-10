#include <iostream>
#include <math.h>
using namespace std;

bool ToF(int n)
{
    int m = sqrt(double(n));

    if (n == 1)
        return false;

    for (int i = 2; i <= m; i++)
    {
        if (n % i == 0)
            return false;
    }

    return true;
}

int main()
{
    int n, t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;

        if (n == 0)
            break;

        for (int i = 3; i <= n / 2; i++)
        {
            if (ToF(n - i) && ToF(i))
            {
                cout << n << " = " << i << " + " << n - i << endl;
                break;
            }
            else if (i == n / 2)
                cout << "wrong";
        }
    }
}