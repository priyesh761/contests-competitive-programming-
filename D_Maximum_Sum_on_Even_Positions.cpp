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
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;

        ll ar[n];
        for (ll i = 0; i < n; i++)
            cin >> ar[i];
        ll maxi1 = 0, maxi2 = 0;
        ll sum = 0, o = 0, e = 0;

        for (ll i = 1; i < n; i += 2)
        {
            sum = max(sum - ar[i - 1] + ar[i], 0LL);
            maxi1 = max(sum, maxi1);
        }
        sum = 0;
        for (ll i = 2; i < n; i += 2)
        {

            sum = max(sum + ar[i - 1] - ar[i], 0LL);
            maxi2 = max(maxi2, sum);
        }

        for (ll i = 0; i < n; i += 2)
        {
            maxi1 += ar[i];
            maxi2 += ar[i];
        }
        cout << max(maxi1, maxi2) << '\n';
    }
}