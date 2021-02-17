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
        int n, q;
        cin >> n >> q;

        ll ar[n];
        map<ll, ll> mp;
        ll mx = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            if (i != 0)
                ar[i] += ar[i - 1];
            if (ar[i] > mx)
            {
                mp[ar[i]] = i;
                mx = ar[i];
            }
        }
        ll sm = ar[n - 1];
        while (q--)
        {
            ll x;
            cin >> x;
            auto it = mp.lower_bound(x);
            if (it == mp.end())
            {
                if (sm <= 0)
                    cout << -1 << ' ';
                else
                {
                    ll rot = (x - mx) / sm;
                    x -= rot * sm;
                    if (x > mx)
                    {
                        x -= sm;
                        rot++;
                    }
                    it = mp.lower_bound(x);
                    ll ans = rot * n + it->S;
                    cout << ans << ' ';
                }
            }
            else
            {
                cout << it->S << ' ';
            }
        }
        cout << '\n';
    }
}