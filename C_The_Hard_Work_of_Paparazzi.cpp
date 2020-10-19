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
    int r, n;

    cin >> r >> n;

    vector<int> t, x, y;
    t.resize(n + 1);
    x.resize(n + 1);
    y.resize(n + 1);
    t[0] = 0;
    x[0] = y[0] = 1;

    for (int i = 1; i <= n; i++)
        cin >> t[i] >> x[i] >> y[i];

    vector<int> dp(n + 1, -1);
    vector<int> preMax(n + 1, -1);
    preMax[0] = 0;
    dp[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i - 1; j >= 0; j--)
        {
            if (t[i] - t[j] >= 1000)
            {
                dp[i] = max(dp[i], preMax[j] + 1);
                break;
            }
            if (dp[j] != -1 && (t[i] - t[j] >= abs(x[i] - x[j]) + abs(y[i] - y[j])))
                dp[i] = max(dp[i], 1 + dp[j]);
        }
        preMax[i] = max(preMax[i - 1], dp[i]);
    }

    cout << *max_element(dp.begin(), dp.end());
}