#define MOD 1000000007

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<char> v;
    int t, n, flag = 0, count, countV = 0;
    char input;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        v.clear();
        countV = 0;
        count = 0;
        for (int j = 0; j < n; j++)
        {
            cin >> input;
            v.push_back(input);
        }
        for (auto &k : v)
        {
            countV++;
            if (k == 'a' || k == 'i' || k == 'u' || k == 'e' || k == 'o')
            {
                count = 0;
            }
            else
            {
                count++;
            }
            if (count == 4)
            {
                cout << "NO" << endl;
                break;
            }
            if (countV == n)
            {
                cout << "YES" << endl;
            }
        }
    }

    return 0;
}