#include<iostream>
using namespace std;
int main()
{
    int a[3],b[3] = {};
    for (int i = 0; i < 3; i++)
    {
        scanf("%1d", &a[i]);
    }

    for (int i = 0; i < 3; i++)
    {
        scanf("%1d", &b[i]);
    }
    
    int resultA = a[2] * 100 + a[1] * 10 + a[0];
    int resultB = b[2] * 100 + b[1] * 10 + b[0];

    if(resultA < resultB)   
        cout << resultB;
    else
        cout << resultA; 
}