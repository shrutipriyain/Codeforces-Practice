#include <iostream>
using namespace std;
int main()
{
    string a;
    cin >> a;
    int f = 0, l = -1;
    if (a[0] == '-')
    {
        cout << "(";
        f = 1;
    }
    cout << "$";
    for (int i = 0; i < a.size(); i++)
        if (a[i] == '.')
        {
            l = i;
            break;
        }
    if (l == -1)
        l = a.size();
    for (int i = f; i < a.size(); i++)
    {
        cout << a[i];
        if (l - i > 3 && (l - i) % 3 == 1)
            cout << ",";
        if (i - l > 1 && l != -1)
            break;
    }
    if (l == a.size())
        cout << ".00";
    else if (a.size() - l == 2)
        cout << "0";
    if (a[0] == '-')
        cout << ")";
}