#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define mod 1000000007
#define init ios::sync_with_stdio(0), cin.tie(0);
typedef pair<int, int> pi;
#define F first
#define S second

ll func(vector<ll> &ar, vector<ll> &dp, int ind)
{
    if (ind >= ar.size())
        return 0;
    if (dp[ind] != -1)
        return dp[ind];
    dp[ind] = func(ar, dp, ind + ar[ind]) + ar[ind];
    return dp[ind];
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

        vector<ll> ar(n);
        for (int i = 0; i < n; i++)
            cin >> ar[i];
        vector<ll> dp(n, -1);

        for (int i = 0; i < n; i++)
            if (dp[i] == -1)
                dp[i] = ar[i] + func(ar, dp, i + ar[i]);

        cout << *max_element(dp.begin(), dp.end()) << '\n';
    }
}