#include <iostream>
using namespace std;
int main()
{
    int t, max = -100000, min = 1000000, n;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        if (n > max)
            max = n;

        if (n < min)
            min = n;
    }
    cout << max - min;
}