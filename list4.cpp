#include <iostream>
#include <list>
using namespace std;
list<int> lt;
void view()
{
    list<int>::iterator iter;
    for (iter = lt.begin(); iter != lt.end(); iter++)
        cout << *iter << " ";
    cout << endl;
}

int main()
{
    list<int>::iterator q;
    lt.push_back(1);
    lt.push_back(2);
    lt.push_back(3);

    view();
    q = lt.begin();
    q++;
    cout << *q << endl;
    lt.insert(q, 9);
    view();
    lt.erase(q);
    cout << *q << endl;
}