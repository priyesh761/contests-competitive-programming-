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

vector<ll> fact((ll)2e6);
void facto()
{
    fact[0] = 1;
    for (int i = 1; i <= (ll)1e6 + 5; i++)
    {
        fact[i] = fact[i - 1];
        fact[i] *= i;
        fact[i] %= mod;
    }
}

ll power(ll n, ll b)
{

    ll res = 1;
    while (b > 0)
    {
        if (b % 2 == 1)
        {
            res *= n;
            res %= mod;
        }
        n *= n;
        n %= mod;
        b >>= 1;
    }

    return res;
}

int main()
{
    init;
    facto();
    ll n;
    cin >> n;
    ll ans = (power(10, n) - 2 * power(9, n) + power(8, n)) % mod;
    if (ans < 0)
        ans += mod;
    cout << ans;
    //    ll ans = ((comb(n, 2) % mod) * (power(10, n - 2) % mod)) % mod;
    //  cout << ans;
}