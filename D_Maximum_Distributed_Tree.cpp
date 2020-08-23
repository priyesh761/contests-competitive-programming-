#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define mod 1000000007
#define init ios::sync_with_stdio(0), cin.tie(0);
typedef vector<int> vi;
typedef pair<int, int> pi;
#define MS(x, y) memset(x, y, sizeof(x))
#define F first
#define S second
#define PB push_back
#define MP make_pair

int dfs(vector<vector<int>> &G, vector<ll> &v, int curr = 0, int par = -1)
{

    ll tc = 0;
    for (int i = 0; i < G[curr].size(); i++)
    {
        if (G[curr][i] != par)
        {
            ll cnt = dfs(G, v, G[curr][i], curr);
            v.PB(((ll)(G.size() - cnt) * cnt));
            tc += cnt;
        }
    }
    return tc + 1;
}

int main()
{
    init;
    int t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;

        vector<vector<int>> G(n);
        for (int i = 1; i < n; i++)
        {
            int x, y;
            cin >> x >> y;
            G[x - 1].PB(y - 1);
            G[y - 1].PB(x - 1);
        }

        int m;
        cin >> m;

        vector<long long> prime(m);
        for (int i = 0; i < m; i++)
            cin >> prime[i];

        sort(prime.begin(), prime.end());

        while (m > n - 1)
        {
            ll tmp1 = prime.back();
            prime.pop_back();
            prime[prime.size() - 1] = ((prime.back() * tmp1) % mod);
            m--;
        }
        reverse(prime.begin(), prime.end());
        while (m < n - 1)
        {
            prime.push_back(1);
            m++;
        }
        vector<long long> vv;
        dfs(G, vv);

        sort(vv.begin(), vv.end(), greater<ll>());

        ll ans = 0;

        for (int i = 0; i < n - 1; i++)
        {
            ans += ((vv[i] % mod) * prime[i]) % mod;
            ans %= mod;
        }
        cout << ans << '\n';
    }
}