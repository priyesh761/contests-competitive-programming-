#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define mod 1000000007
#define init ios::sync_with_stdio(0), cin.tie(0);
typedef vector<long long> vi;
typedef pair<long, long> pi;
#define MS(x, y) memset(x, y, sizeof(x))
#define F first
#define S second
#define PB push_back
#define MP make_pair

vector<ll> dfs(vector<vector<int>> &G, vector<ll> &p, int curr)
{
    vector<ll> tp = {0, 0, 0}; //(numberOfLeaves, extra, Max);
    vector<vector<ll>> v;

    for (ll i = 0; i < G[curr].size(); i++)
    {
        vector<ll> tmp = dfs(G, p, G[curr][i]);
        tp[0] += tmp[0];
        tp[2] = max(tp[2], tmp[2]);
        v.push_back(tmp);
    }

    for (ll i = 0; i < v.size(); i++)
        tp[1] += v[i][0] * (tp[2] - v[i][2]) + v[i][1];

    if (G[curr].empty())
        tp[0]++;

    ll people = min(tp[1], p[curr]);
    ll rem = p[curr] - people;
    tp[1] -= people;
    if (rem != 0)
    {
        tp[2] += rem / tp[0] + (rem % tp[0] != 0);
        tp[1] = tp[0] - (rem % tp[0]);
        if (rem % tp[0] == 0)
            tp[1] = 0;
    }
    return tp;
}

int main()
{
    init;
    int n;
    cin >> n;

    vector<vector<int>> G(n);

    for (int i = 0; i < n - 1; i++)
    {
        int x;
        cin >> x;
        G[x - 1].push_back(i + 1);
    }
    vector<ll> p(n);

    for (int i = 0; i < n; i++)
        cin >> p[i];

    ll ans = dfs(G, p, 0)[2];
    cout << ans;
}