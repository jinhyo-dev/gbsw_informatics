#include <iostream>
using namespace std;
int main()
{
    int a[10] = {}, max = -100000, place;
    for (int i = 0; i < 9; i++)
    {
        cin >> a[i];
        if (max < a[i])
        {
            max = a[i];
            place = i;
        }
    }
    cout << max << endl
         << place + 1;
}