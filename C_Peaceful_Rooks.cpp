#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define mod 1000000007
#define init ios::sync_with_stdio(0), cin.tie(0);
typedef pair<int, int> pi;
#define F first
#define S second

int cy = 0;
void dfs(vector<vector<int>> &G, vector<int> &col, int curr)
{
    //  cout << curr << ' ';
    if (col[curr] == 2)
        return;
    if (col[curr] == 1)
    {
        cy++;
        return;
    }
    col[curr] = 1;
    for (int i = 0; i < G[curr].size(); i++)
        dfs(G, col, G[curr][i]);

    col[curr] = 2;
}
int main()
{
    init;
    int t;
    cin >> t;

    while (t--)
    {
        cy = 0;
        int n, m;
        cin >> n >> m;

        vector<int> x(n + 1);

        vector<int> r(m), c(m);
        vector<vector<int>> G(n + 1);
        int cnt = 0;
        for (int i = 0; i < m; i++)
        {
            cin >> r[i] >> c[i];
            if (r[i] == c[i])
                cnt--;
            else
                G[r[i]].push_back(c[i]);
        }
        cnt += m;
        for (int i = 0; i < m; i++)
            if (x[r[i]] != 2)
                dfs(G, x, r[i]);

        cnt += cy;

        cout << cnt << '\n';
    }
}