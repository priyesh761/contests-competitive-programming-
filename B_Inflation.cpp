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

        vector<ll> p(n);
        for (int i = 0; i < n; i++)
            cin >> p[i];

        vector<ll> pf(n);
        pf[0] = p[0];
        for (int i = 1; i < n; i++)
            pf[i] += pf[i - 1] + p[i];

        ll fil = 0;
        for (int i = n - 1; i > 0; i--)
        {
            ll req = (p[i] * 100) / k + ((p[i] * 100) % k != 0);
            if (req > pf[i - 1] + fil)
            {
                fil += (req - pf[i - 1] - fil);
            }
        }

        cout << fil << '\n';
    }
}