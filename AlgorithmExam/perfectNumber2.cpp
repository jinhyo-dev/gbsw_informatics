#include <iostream>
using namespace std;
int main()
{
    int t, n, sum = 0;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        for (int j = 1; j < n; j++)
        {
            if (n % j == 0)
                sum += j;
        }
        if (sum == n)
            cout << "완전수\n";
        else if (sum > n)
            cout << "과잉수\n";
        else
            cout << "부족수\n";
        sum = 0;
    }
}
