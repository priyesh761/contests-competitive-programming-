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

    for (int zz = 1; zz <= t; zz++)
    {
        ll n, b, c;
        cin >> n >> b >> c;

        ll ans = min(b - 1 + n + 1, b - 1 + n - c + 1 + b - c);
        cout << "Case #" << zz << ": " << ans << '\n';
    }
}