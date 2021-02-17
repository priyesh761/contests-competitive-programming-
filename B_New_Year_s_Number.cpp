#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define mod 1000000007
#define init ios::sync_with_stdio(0), cin.tie(0);
typedef pair<int, int> pi;
#define F first
#define S second

int main()
{
    init;
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        bool st = 0;
        for (int i = 0; i * 2020 <= n; i++)
        {
            int rem = n - i * 2020;
            if (rem % 2021 == 0)
            {
                st = 1;
                break;
            }
        }
        if (st)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}