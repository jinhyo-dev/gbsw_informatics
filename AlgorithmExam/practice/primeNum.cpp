#include <iostream>
#include <cmath>
using namespace std;

bool primeNum(int num)
{
    if (num < 2)
        return false;
    int a = (int)sqrt(num);
    for (int i = 2; i <= a; i++)
        if (num % i == 0)
            return false;
    return true;
}

int main()
{
    int t, n, cnt = 0;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        if (primeNum(n))
            cnt++;
    }
    cout << cnt;
}