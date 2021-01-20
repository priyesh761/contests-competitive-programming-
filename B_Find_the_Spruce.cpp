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
        int n, m;
        cin >> n >> m;

        vector<vector<char>> v(n, vector<char>(m + 1));
        vector<vector<ll>> ans(n, vector<ll>(m + 1));
        ll cnt = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                cin >> v[i][j];
                ans[i][j] = v[i][j] == '*';
                if (j != 0)
                    ans[i][j] += ans[i][j - 1];
                //cout << ans[i][j] << ' ';
            }
            // cout << '\n';
        }

        for (int j = 0; j < n; j++)
        {
            for (int k = 1; k <= m; k++)
                if (v[j][k] == '*')
                {
                    //  cout << j << ' ' << k << endl;
                    cnt++;
                    for (int i = 1; j + i < n && k + i <= m && k - i > 0; i++)
                    {
                        if (2 * i + 1 == ans[j + i][k + i] - ans[j + i][k - i - 1])
                            cnt++;
                        else
                            break;
                    }
                }
            // cout << cnt << endl;
        }

        cout << cnt << '\n';
    }
}