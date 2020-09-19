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

bool cmp(int a, int b)
{
    return abs(a) < abs(b);
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

        vector<ll> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        sort(v.begin(), v.end(), cmp);
        ll prod = v[0] * v[1] * v[2] * v[3] * v[4];
        vector<vector<ll>> dp(5, vector<ll>(2, LONG_LONG_MIN));
        for (int j = 0; j < n; j++)
            for (int i = 4; i >= 0; i--)
            {

                if (i == 0)
                {
                    if (v[j] >= 0)
                        dp[i][0] = max(dp[i][0], v[j]);
                    else if (dp[i][1] == LONG_LONG_MIN)
                    {
                        dp[i][1] = v[j];
                    }
                    else
                    {
                        dp[i][1] = min(dp[i][1], v[j]);
                    }
                }
                else
                {
                    if (v[j] >= 0)
                    {
                        if (dp[i - 1][0] != LONG_LONG_MIN)
                        {
                            dp[i][0] = max(dp[i][0], dp[i - 1][0] * v[j]);
                        }
                        if (dp[i - 1][1] != LONG_LONG_MIN)
                        {
                            if (dp[i][1] == LONG_LONG_MIN)
                            {
                                dp[i][1] = dp[i - 1][1] * v[j];
                            }
                            else
                            {
                                dp[i][1] = min(dp[i][1], dp[i - 1][1] * v[j]);
                            }
                        }
                    }
                    else
                    {

                        if (dp[i - 1][1] != LONG_LONG_MIN)
                        {
                            dp[i][0] = max(dp[i][0], dp[i - 1][1] * v[j]);
                        }
                        if (dp[i - 1][0] != LONG_LONG_MIN)
                        {
                            if (dp[i][1] == LONG_LONG_MIN)
                            {
                                dp[i][1] = dp[i - 1][0] * v[j];
                            }
                            else
                            {
                                dp[i][1] = min(dp[i][1], dp[i - 1][0] * v[j]);
                            }
                        }
                    }
                }
            }

        cout << max({dp[4][0], dp[4][1], prod}) << endl;
    }
}