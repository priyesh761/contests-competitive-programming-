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

        int n, k;
        cin >> n >> k;

        int x[n], y[n];
        ll sx = 0, sy = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> x[i] >> y[i];
        }
        int mx = 0, my = 0, mdist = INT_MAX;
        bool st = 1;
        for (int i = 0; i < n; i++)
        {
            ll dist = 0;
            st = 1;
            for (int j = 0; j < n; j++)
                if (k < abs(x[i] - x[j]) + abs(y[i] - y[j]))
                    st = 0;

            if (st)
            {
                break;
            }
        }

        if (st)
            cout << 1 << '\n';
        else
            cout << -1 << '\n';
    }
}