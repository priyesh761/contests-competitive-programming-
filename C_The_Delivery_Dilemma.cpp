#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define mod 1000000007
#define init ios::sync_with_stdio(0), cin.tie(0);
typedef vector<ll> vi;
typedef pair<ll, ll> pi;
#define MS(x, y) memset(x, y, sizeof(x))
#define F first
#define S second
#define PB push_back
#define MP make_pair

bool cmp(pi &a, pi &b)
{
    if (a.F == b.F)
        return a.S > b.S;
    return a.F < b.F;
}

bool cmp1(pi &a, pi &b)
{
    if (a.S == b.S)
        return a.F > b.F;
    return a.S < b.S;
}
int main()
{
    init;
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<pi> ar(n);

        for (int i = 0; i < n; i++)
            cin >> ar[i].S;

        for (int i = 0; i < n; i++)
            cin >> ar[i].F;

        sort(ar.begin(), ar.end(), cmp1);

        vector<ll> pff(n + 1);
        pff[n] = 0;

        for (int i = n - 1; i >= 0; i--)
            pff[i] += pff[i + 1] + ar[i].F;

        ll ans = pff[0];
        for (int i = 0; i < n; i++)
            ans = min(ans, max(ar[i].S, pff[i + 1]));

        cout << ans << '\n';
    }
}