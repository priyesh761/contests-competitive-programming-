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
        int n, x;
        cin >> n >> x;

        ll ar[n];
        for (int i = 0; i < n; i++)
            cin >> ar[i];

        bool st = 1, st1 = 1;

        ll sum = 0, lst = 0, mi = INT_MAX;
        vector<ll> v(100);
        queue<pair<ll, ll>> qu;
        for (int i = 0; i < n; i++)
            qu.push({ar[i], 1});

        while (!qu.empty() && qu.front().F % x == 0)
        {
            ll xx, yy;
            tie(xx, yy) = qu.front();
            //          cout << xx << ' ' << yy << '\n';
            qu.pop();
            sum += (xx * yy);
            qu.push({xx / x, (yy * x)});
        }

        while (!qu.empty())
        {
            ll xx, yy;
            tie(xx, yy) = qu.front();
            //            cout << xx << ' ' << yy << '\n';
            qu.pop();
            sum += (xx * yy);
        }
        cout << sum << '\n';
    }
}