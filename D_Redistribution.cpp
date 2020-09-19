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
    int n;
    cin >> n;

    vector<long long> dp(n + 1);

    for (int i = 3; i <= n; i++)
    {
        for (int j = i - 3; j >= 0; j--)
        {
            dp[i] += dp[j];
            dp[i] %= mod;
        }
        dp[i]++;
    }

    cout << dp[n] % mod;
}