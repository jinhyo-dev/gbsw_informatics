#include <iostream>
using namespace std;

int a[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};

void Qsort(int left, int right)
{
    int i, j, tmp = 0, pivot = 0;

    if (left < right)
    {
        pivot = a[left];
        i = left + 1;
        j = right;

        while (i <= j)
        {
            while (pivot > a[i])
                i++;
            while (pivot < a[j])
                j--;

            if (i < j)
            {
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
        tmp = a[j];
        a[j] = a[left];
        a[left] = tmp;
        Qsort(left, j - 1);
        Qsort(j + 1, right);
    }
}

int main()
{
    Qsort(0, 9);
    for (int i = 0; i < 10; i++)
    {
        cout << a[i] << ' ';
    }
}