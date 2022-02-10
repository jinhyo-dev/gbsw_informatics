#include <iostream>
using namespace std;
int main()
{
    int a[10] = {}, min = 10000000;
    for (int i = 0; i < 10; i++)
    {
        cin >> a[i];
        if (min > a[i])
            min = a[i];
    }
    cout << min;
}