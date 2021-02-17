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
        int x, y;
        cin >> x >> y;

        string s;
        cin >> s;

        int u, d, l, r;
        u = d = l = r = 0;

        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == 'U')
                u++;
            if (s[i] == 'D')
                d++;
            if (s[i] == 'L')
                l++;
            if (s[i] == 'R')
                r++;
        }

        int yy = y - (u - d);
        int xx = x - (r - l);
        bool st0 = 0, st1 = 0;
        if (yy >= 0)
        {
            if (d >= yy)
                st0 = 1;
        }
        else
        {
            if (u >= abs(yy))
                st0 = 1;
        }

        if (xx >= 0)
        {
            if (l >= xx)
                st1 = 1;
        }
        else
        {
            if (r >= abs(xx))
                st1 = 1;
        }

        if (st0 && st1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}