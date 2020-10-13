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
    int lp = 0;
    while (t--)
    {
        lp++;
        int n, k;
        cin >> n >> k;

        vector<pair<ll, ll>> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i].F >> v[i].S;
        }

        sort(v.begin(), v.end());

        ll cnt = 0;
        ll mx = -1;
        for (int i = 0; i < n; i++)
        {
            v[i].F = max(v[i].F, mx);
            v[i].S = max(v[i].S, mx);

            ll rng = v[i].S - v[i].F;
            cnt += rng / k;
            if (rng % k)
            {
                mx = v[i].S + k - (rng % k);
                cnt++;
            }
        }

        cout << "Case #" << lp << ": " << cnt << '\n';
    }
}