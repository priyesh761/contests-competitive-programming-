#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define mod 1000000007
#define init ios::sync_with_stdio(0), cin.tie(0);
typedef pair<int, int> pi;
#define F first
#define S second

bool func(pair<ll, ll> &a, pair<ll, ll> &b)
{
    if (a.F == b.F)
        return a.S > b.S;
    return a.F < b.F;
}

bool func1(pair<ll, ll> &a, pair<ll, ll> &b)
{
    if (a.S == b.S)
    {
        return a.F < b.F;
    }
    return a.S < b.S;
}

int main()
{
    init;
    int t;
    cin >> t;

    while (t--)
    {
        ll a, b, n;
        cin >> a >> b >> n;
        bool st = 1;
        vector<pair<ll, ll>> aa(n);

        for (ll i = 0; i < n; i++)
            cin >> aa[i].F;

        for (ll i = 0; i < n; i++)
            cin >> aa[i].S;

        sort(aa.begin(), aa.end());
        ll A = a, B = b;
        for (ll i = 0; i < n; i++)
        {
            ll req = (aa[i].S / A) + (aa[i].S % A != 0);
            // cout << req << ' ';
            B -= (req * aa[i].F);
            if (B + aa[i].F <= 0)
            {
                st = 0;
                break;
            }
        }

        if (st)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}