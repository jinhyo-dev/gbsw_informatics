#include <iostream>
using namespace std;

void binary(int num)
{
    if (num == 0 || num == 1)
    {
        cout << num;
        return;
    }
    binary(num / 2);
    cout << num % 2;
}

int main()
{
    int a;
    cin >> a;
    cout << "2진수: ";
    binary(a);
    cout << endl;
    printf("16진수: %X", a);
}