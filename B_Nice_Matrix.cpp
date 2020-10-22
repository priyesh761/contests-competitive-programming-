#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define mod 1000000007
#define init ios::sync_with_stdio(0), cin.tie(0);
#define MS(x, y) memset(x, y, sizeof(x))
#define F first
#define S second
#define PB push_back
#define MP make_pair

int32_t main()
{
    init;
    ll t;
    cin >> t;

    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        vector<vector<ll>> mat(n, vector<ll>(m));

        for (ll i = 0; i < n; i++)
            for (ll j = 0; j < m; j++)
                cin >> mat[i][j];

        ll cost = 0;
        vector<int> tmp(4);
        for (ll i = 0; i < (n + 1) / 2; i++)
            for (ll j = 0; j < (m + 1) / 2; j++)
            {
                tmp[0] = mat[i][j];
                tmp[1] = mat[i][m - 1 - j];
                tmp[2] = mat[n - 1 - i][j];
                tmp[3] = mat[n - 1 - i][m - 1 - j];
                sort(tmp.begin(), tmp.end());
                ll median = (tmp[1] + tmp[2]) / 2;
                cost += abs(mat[i][j] - median) + abs(mat[n - 1 - i][j] - median);
                cost += abs(mat[i][m - 1 - j] - median) + abs(mat[n - 1 - i][m - 1 - j] - median);
                if (i == n - 1 - i)
                    cost -= abs(mat[n - 1 - i][j] - median);
                if (j == m - 1 - j)
                    cost -= abs(mat[i][m - 1 - j] - median);
                if (i == n - 1 - i || j == m - 1 - j)
                    cost -= abs(mat[n - 1 - i][m - 1 - j] - median);
            }
        cout << cost << '\n';
    }
}