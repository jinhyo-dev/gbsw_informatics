#include <iostream>
using namespace std;

struct student
{
    char name[10];
    int num;
};

int main()
{
    student list[20] = {};
    student *pt;
    int i, n, tmp = 0;
    char temp[10];
    pt = list;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> pt[i].num;
        cin >> pt[i].name;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (list[i].num < list[j].num)
            {
                tmp = list[i].num;
                list[i].num = list[j].num;
                list[j].num = tmp;

                for (int k = 0; k < 10; k++)
                {
                    temp[k] = list[i].name[k];
                    list[i].name[k] = list[j].name[k];
                    list[j].name[k] = temp[k];
                }
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        cout << pt[i].num << ' ' << pt[i].name << endl;
    }
}