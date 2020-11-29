#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define mod 1000000007
#define init ios::sync_with_stdio(0), cin.tie(0);
typedef pair<int, int> pi;
#define F first
#define S second

int dfs(vector<vector<int>> &G, vector<ll> &vis, int curr, int par)
{
    vis[curr] = 1;
    for (int i = 0; i < G[curr].size(); i++)
        if (G[curr][i] != par)
        {
            if (vis[G[curr][i]])
                return G[curr][i];
            int ans = dfs(G, vis, G[curr][i], curr);
            if (ans >= 0)
                return (ans == curr) ? -1 : ans;
        }
    vis[curr] = 0;
    return -1;
}

int dfs1(vector<vector<int>> &G, vector<ll> &vis, int curr, int par)
{
    int ans = 0;
    for (int i = 0; i < G[curr].size(); i++)
        if (G[curr][i] != par && vis[G[curr][i]] == 0)
            ans += dfs1(G, vis, G[curr][i], curr);
    return ans + (vis[curr] == 0);
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

        vector<vector<int>> G(n);
        int a, b;

        for (int i = 0; i < n; i++)
        {
            cin >> a >> b;
            a--, b--;
            G[a].push_back(b);
            G[b].push_back(a);
        }

        vector<ll> vis(n + 1);
        dfs(G, vis, 0, -1);

        for (int i = 0; i < n; i++)
            if (vis[i])
                vis[i] += dfs1(G, vis, i, -1);

        ll ans = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            ans += (vis[i] * (vis[i] - 1)) / 2;
            ans += 2 * vis[i] * vis[i + 1];
            vis[i] += vis[i + 1];
        }

        cout << ans << '\n';
    }
}