#include <iostream>
using namespace std;

int main()
{
    int change, money, price, result = 0;
    cin >> money >> price;
    change = money - price;

    result += change / 500;
    change = change % 500;

    result += change / 100;
    change = change % 100;

    result += change / 50;
    change = change % 50;

    result += change / 10;
    change = change % 10;

    cout << result;
}