#include <iostream>
using namespace std;
int main()
{
    int a[10] = {1000, 9, 8, 7, 6, 5, 3, 21, 32, 23};
    int tmp = 0;

    for (int i = 0; i < 10; i++)
    {
        int j = i;
        while (j > 0 && a[j - 1] > a[j])
        {
            tmp = a[j];
            a[j] = a[j - 1];
            a[j - 1] = tmp;
            j--;
        }
    }

    for (int i = 0; i < 10; i++)
    {
        cout << a[i] << ' ';
    }
}