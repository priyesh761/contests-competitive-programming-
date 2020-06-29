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

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}
int main()
{
    init;
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;

        ll ar[n];
        ll maxi = 0;
        ll ind = 0;
        map<ll, ll> mp;
        for (ll i = 0; i < n; i++)
        {
            cin >> ar[i];
            ar[i] %= k;
            if (ar[i] != 0)
            {
                mp[ar[i]]++;
                if (mp[ar[i]] >= maxi)
                {
                    if ((maxi == mp[ar[i]] && ar[i] < ind))
                        ind = ar[i];
                    else if (mp[ar[i]] > maxi)
                    {
                        ind = ar[i];
                    }

                    maxi = mp[ar[i]];
                }
            }
        }
        //for (ll i = 0; i < n; i++)
        //  cout << ar[i] << ' ';
        ll ans = (maxi - 1) * k + (k - ind);
        if (ans > 0)
            ans++;
        // cout << maxi << ' ' << ind << endl;
        cout << ans << '\n';
    }
}