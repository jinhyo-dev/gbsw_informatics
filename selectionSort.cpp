#include <iostream>
using namespace std;
int main()
{
    int n, k, tmp = 0, s[10000] = {}, min;
    cin >> n; // 5
    cin >> k; // 3
    for (int i = 0; i < n; i++)
    {
        scanf("%d", s + i); // 5 3 1 2 4
    }
    for (int i = 0; i < k; i++)
    {
        min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (s[j] < s[min])
            {
                min = j;
            }
        }
        tmp = s[i];
        s[i] = s[min];
        s[min] = tmp;
    }

    for (int i = 0; i < n; i++)
    {
        cout << s[i] << " ";
    }
}