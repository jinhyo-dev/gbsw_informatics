#include <iostream>
using namespace std;

int main()
{
    int tmp, n;
    int s[1000] = {};

    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> s[i];

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j > 0; j--)
        {
            if (s[j] < s[j - 1])
            {
                tmp = s[j];
                s[j] = s[j - 1];
                s[j - 1] = tmp;
            }
            else
                break;
        }
    }

    for (int i = 0; i < n; i++)
        cout << s[i] << ' ';
}