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

int main()
{
    init;
    ll r, g, b;

    cin >> r >> g >> b;

    ll aa[r], bb[g], cc[b];

    for (ll i = 0; i < r; i++)
        cin >> aa[i];
    for (ll i = 0; i < g; i++)
        cin >> bb[i];
    for (ll i = 0; i < b; i++)
        cin >> cc[i];

    sort(aa, aa + r, greater<ll>());
    sort(bb, bb + g, greater<ll>());
    sort(cc, cc + b, greater<ll>());
    ll mx = 0;
    vector<vector<vector<ll>>> dp(r + 1, vector<vector<ll>>(g + 1, vector<ll>(b + 1)));
    for (int i = 0; i <= r; i++)
    {
        for (int j = 0; j <= g; j++)
        {
            for (int k = 0; k <= b; k++)
            {
                int t1, t2, t3;
                t1 = t2 = t3 = 0;
                if (i - 1 >= 0 && j - 1 >= 0)
                    t1 = aa[i - 1] * bb[j - 1] + dp[i - 1][j - 1][k];
                if (j - 1 >= 0 && k - 1 >= 0)
                    t2 = bb[j - 1] * cc[k - 1] + dp[i][j - 1][k - 1];
                if (k - 1 >= 0 && i - 1 >= 0)
                    t3 = cc[k - 1] * aa[i - 1] + dp[i - 1][j][k - 1];

                dp[i][j][k] = max({t1, t2, t3});
                mx = max(mx, dp[i][j][k]);
                //cout << dp[i][j][k] << ' ' << i << ' ' << j << ' ' << k;
            }
            //cout << '\n';
        }
        //cout << "\n\n";
    }

    cout << mx;
}