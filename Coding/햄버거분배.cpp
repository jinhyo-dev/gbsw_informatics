#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n, k, cnt = 0;
    char str[22];
    cin >> n >> k;
    cin >> str;

    for (int i = 0; i < 20; i++)
    {
        if (str[i] == 'P')
        {
            for (int j = i - k; j <= i + k; j++)
            {
                if (str[j] == 'H')
                {
                    str[j] = 0;
                    cnt++;
                }
            }
        }
    }
    cout << cnt;
}
// HHPHPPHHPPHPPPHPHPHP
// HHHHHPPPPPHPHPHPHHHP