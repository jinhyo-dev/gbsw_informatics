#include <iostream>
int n, i;
int main()
{
    scanf("%d", &n);

    i = 1;
    while (i <= n)
    {
        if (n % i == 0)
            printf("%d\n", i);
        i++;
    }
}
