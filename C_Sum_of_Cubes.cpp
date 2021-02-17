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
        ll x;

        cin >> x;

        ll k = 1;
        while (k * k * k < x)
            k++;

        bool st = 0;
        for (ll i = 1; i <= k; i++)
        {
            ll rem = x - (i * i * i);

            ll tl = 1, tr = k;
            while (tl <= tr)
            {
                ll mid = tl + (tr - tl) / 2;
                ll cb = mid * mid * mid;
                if (cb == rem)
                {
                    st = 1;
                    break;
                }
                else if (cb < rem)
                    tl = mid + 1;
                else
                    tr = mid - 1;
            }
        }
        if (st)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}