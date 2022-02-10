#include <iostream>
using namespace std;
int main()
{
    int key, MAX = 10, i;
    int a[MAX] = {6, 1, 3, 12, 20, 7, 8, 2, 30, 40};
    cin >> key;
    bool found = 0;
    for (i = 0; i < MAX; i++)
    {
        if (a[i] == key)
        {
            found = true;
            break;
        }
    }

    if (found == true)
        cout << "found";
    else
        cout << "not found";
}