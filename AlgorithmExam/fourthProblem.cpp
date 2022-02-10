#include <iostream>
using namespace std;
int main()
{
    int a[4][5] = {};
    int c1 = 0, c2 = 0, c3 = 0, c4 = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
            cin >> a[i][j];
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i == 0)
                c1 += a[i][j];
            else if (i == 1)
                c2 += a[i][j];
            else if (i == 2)
                c3 += a[i][j];
            else if (i == 3)
                c4 += a[i][j];
        }
    }
    // cout << c1 << endl;
    // cout << c2 << endl;
    // cout << c3 << endl;
    // cout << c4 << endl;

    if (c1 > c2 && c1 > c3 && c1 > c4)
        cout << "1 " << c1;
    else if (c2 > c1 && c2 > c3 && c2 > c4)
        cout << "2 " << c2;
    else if (c3 > c1 && c3 > c2 && c3 > c4)
        cout << "3 " << c3;
    else
        cout << "4 " << c4;
}