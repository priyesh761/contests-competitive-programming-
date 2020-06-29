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

ll bs(vector<ll> &b, ll m, ll k)
{
    int l = 0, r = m;
    int ans = 0;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (b[mid] <= k)
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    return ans;
}
int main()
{
    init;
    ll n, m, k;
    cin >> n >> m >> k;

    vector<ll> a(n + 1), b(m + 1);

    for (ll i = 1; i <= n; i++)
    {
        cin >> a[i];
        a[i] += a[i - 1];
    }
    for (ll i = 1; i <= m; i++)
    {
        cin >> b[i];
        b[i] += b[i - 1];
    }

    ll cnt = 0, sum = 0;
    for (ll i = 0; i <= n; i++)
    {
        ll ind = 0;
        if (k >= a[i])
            ind = bs(b, m, k - a[i]);
        else
            break;

        if (a[i] + b[ind] <= k)
            cnt = max(cnt, i + ind);
    }

    cout << cnt;
}