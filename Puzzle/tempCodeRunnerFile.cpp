#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = t; i >= 1; i--)
    {
        int x, y;
        cin >> x >> y;
        if (x - y == 0)
        {
            cout << 0 << endl;
        }
        else
            cout << y / x << endl;
    }
    return 0;
}
