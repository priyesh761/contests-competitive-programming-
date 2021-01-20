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
        n++;
        vector<ll> x(n);
        vector<ll> t(n);

        for (int i = 1; i < n; i++)
            cin >> t[i] >> x[i];

        vector<ll> vp(n);
        ll pxx = 0, xx = 0, tt = 0;
        int cnt = 0;
        t[0] = t[1];
        for (int i = 1; i < n; i++)
        {
            pxx += ((xx < pxx) ? -1 : 1) * min(abs(xx - pxx), t[i] - t[i - 1]);
            if (tt <= t[i])
            {
                tt = t[i] + abs(xx - x[i]);
                pxx = xx;
                xx = x[i];
            }
            vp[i] = pxx;
        }
        vp.push_back(xx);
        for (int i = 1; i < n; i++)
            if (x[i] >= min(vp[i], vp[i + 1]) && x[i] <= max(vp[i], vp[i + 1]))
                cnt++;

        cout << cnt << '\n';
    }
}