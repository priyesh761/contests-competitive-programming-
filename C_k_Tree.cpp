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

vector<vector<ll>> dp(200, {-1, -1});

ll ktree(ll n, ll k, ll d, bool fl = 0)
{
    if (n == 0)
        return dp[0][fl];
    if (n < d && fl == 0)
        return 0;

    if (dp[n][fl] != -1)
        return dp[n][fl];
    dp[n][fl] = 0;

    for (int i = 1; i <= min(k, n); i++)
        dp[n][fl] = (dp[n][fl] + ktree(n - i, k, d, ((i >= d) || fl))) % mod;

    return dp[n][fl];
}

int main()
{
    init;
    int n, k, d;
    dp[0][0] = dp[0][1] = 1;
    cin >> n >> k >> d;

    cout << ktree(n, k, d);
}