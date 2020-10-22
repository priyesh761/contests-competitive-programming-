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

        vector<int> ar(n + 1);

        for (int i = 1; i <= n; i++)
            cin >> ar[i];

        vector<pair<int, int>> dp(n + 1, {INT_MAX, INT_MAX});
        dp[0].S = 0;
        dp[1].F = ar[1];
        for (int i = 2; i <= n; i++)
        {

            if (dp[i - 1].F != INT_MAX)
                dp[i].S = min(dp[i].S, dp[i - 1].F);
            if (dp[i - 2].F != INT_MAX)
                dp[i].S = min(dp[i].S, dp[i - 2].F);

            if (dp[i - 1].S != INT_MAX)
                dp[i].F = min(dp[i].F, dp[i - 1].S + ar[i]);
            if (dp[i - 2].S != INT_MAX)
                dp[i].F = min(dp[i].F, dp[i - 2].S + ar[i - 1] + ar[i]);
        }
        // for (int i = 0; i <= n; i++)
        //   cout << dp[i].F << ' ' << dp[i].S << endl;
        cout << min(dp[n].F, dp[n].S) << '\n';
    }
}