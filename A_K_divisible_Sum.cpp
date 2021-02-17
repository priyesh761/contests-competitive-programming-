#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define mod 1000000007
#define init ios::sync_with_stdio(0), cin.tie(0);
typedef pair<int, int> pi;
#define F first
#define S second

int main()
{
    init;
    int t;
    cin >> t;

    while (t--)
    {
        ll n, k;
        cin >> n >> k;

        if (n > k)
        {
            ll min = (n / k) + (n % k != 0);
            min *= k;
            ll ans = (min / n) + (min % n != 0);
            cout << ans << '\n';
        }
        else
        {
            ll ans = (k / n) + (k % n != 0);
            cout << ans << '\n';
        }
    }
}