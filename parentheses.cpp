#include<iostream>
#include<stack>
#include<string>
using namespace std;
stack<char> s;
 
int main()
{
    int n;
    int i;
    string str;
 
    cin >> n;
    cin.ignore();
 
    while (n--)
    {
        getline(cin, str);
        for (i = 0; i < str.size(); i++)
        {
            if (str[i] == '(')    s.push(1);
            else if (str[i] == ')')
            {
                if (s.empty() == true)  break;
                s.pop();
            }
        }
        if ( i == str.size() && (s.empty()==true) ) cout << "YES" << endl;
        else cout << "NO\n";
        while (s.empty() == false) s.pop();
    }
}
