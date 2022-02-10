#include <iostream>
#include <algorithm>
using namespace std;
const int MAX = 10;
int main()
{
    int left = 0, right = MAX, middle, key;
    bool found = 0;
    int a[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    sort(a, a + 10);
    cin >> key;

    while (left <= right)
    {
        middle = (left + right) / 2;
        if (a[middle] == key)
        {
            cout << "found";
            found = true;
            break;
        }
        else if (a[middle] < key)
            left = middle + 1;
        else
            right = middle - 1;
    }
    if (found == false)
        cout << "not found";
}