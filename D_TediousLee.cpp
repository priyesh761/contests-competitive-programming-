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
    int max_size = 2 * (1e6) + 1;

    vector<ll> dp(max_size);

    for (int i = 3; i < max_size; i++)
        dp[i] = (dp[i - 1] + 2 * dp[i - 2] + (i % 3 == 0)) % mod;

    /*   for (int i = 0; i < 10; i++)
        cout << dp[i] << ' ';
    cout << endl;
 */
    while (t--)
    {
        int n;
        cin >> n;
        cout << (dp[n] * 4) % mod << '\n';
    }
}