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

    vector<int> ar(n);
    vector<ll> dp(1e5 + 10);

    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
        dp[ar[i] + 1] += ar[i];
    }

    ll mx = 0;
    for (int i = 3; i < 1e5 + 10; i++)
    {
        dp[i] += max(dp[i - 2], dp[i - 3]);
        mx = max(dp[i], mx);
    }

    cout << mx;
}