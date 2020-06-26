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
        int n, k;
        cin >> n >> k;

        ll ar[n];

        for (ll i = 0; i < n; i++)
            cin >> ar[i];

        ll b[k], c[k];

        for (ll i = 0; i < k; i++)
            cin >> b[i];

        sort(ar, ar + n, greater<ll>());
        sort(b, b + k);

        for (int i = 0; i < k; i++)
            c[i] = b[i];
        ll j = 0;
        ll ans = 0;
        vector<ll> maxi(k, LLONG_MIN);
        vector<ll> mini(k, LLONG_MAX);

        for (ll i = 0; i < k; i++)
        {
            if (b[i] > 0)
            {
                b[i]--;
                maxi[i] = max(ar[j], maxi[i]);
                mini[i] = min(mini[i], ar[j]);
                j++;
            }
        }

        for (ll i = 0; i < k; i++)
        {
            while (b[i] > 0)
            {
                b[i]--;
                mini[i] = min(mini[i], ar[j]);
                j++;
            }
        }

        for (ll i = 0; i < k; i++)
            ans += maxi[i] + mini[i];

        cout << ans << '\n';
    }
}