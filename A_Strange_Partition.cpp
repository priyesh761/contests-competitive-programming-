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
        ll mi = 0, mx = 0, n, x;
        cin >> n >> x;

        ll ar[n];
        vector<ll> pf(n);
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            if (ar[i] % x)
                pf[i] = (ar[i] + x) / x;
            else
                pf[i] = (ar[i] / x);
            if (i != 0)
                pf[i] += pf[i - 1];
        }
        mi = pf[n - 1];
        mx = pf[n - 1];
        ll var = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            var += ar[i];
            ll sm = var;
            if (sm % x)
                sm += x;
            sm /= x;
            if (i != 0)
                sm += pf[i - 1];
            //  cout << sm << '\n';
            mi = min(mi, sm);
            mx = max(mx, sm);
        }
        cout << mi << ' ' << mx << '\n';
    }
}