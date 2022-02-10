#include <iostream>
using namespace std;
int a[10] = {1, 3, 2, 4, 9, 7, 10, 8, 5, 6};
int main()
{
    int tmp = 0;
    for (int i = 1; i < 10; i++)
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
        cout << a[i] << " ";
    }
}