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

int main()
{
    init;
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<vector<int>> dp(250, vector<int>(410, INT_MAX));
        int ar[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            ar[i]--;
        }

        sort(ar, ar + n);
        dp[0][0] = 0;

        for (int i = 0; i <= n; i++)
            for (int j = 0; j <= 2 * n; j++)
                if (dp[i][j] != INT_MAX)
                {
                    if (i != n)
                        dp[i + 1][j + 1] = min(dp[i + 1][j + 1], dp[i][j] + abs(ar[i] - j));
                    dp[i][j + 1] = min(dp[i][j + 1], dp[i][j]);
                }

        cout << dp[n][2 * n] << '\n';
    }
}