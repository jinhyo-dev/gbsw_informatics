#include <iostream>
using namespace std;

int a[10] = {26, 5, 37, 1, 61, 11, 59, 15, 48, 19};

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
            while (pivot > a[i]) //피봇보다 큰 값 찾기
                i++;
            while (pivot < a[j]) //피봇보다 작은 값 찾기
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
        cout << a[i] << " ";
    }
}