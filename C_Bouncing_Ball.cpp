#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define mod 1000000007
#define init ios::sync_with_stdio(0), cin.tie(0);
typedef pair<int, int> pi;
#define F first
#define S second
#define int ll

int32_t main()
{
    init;
    int t;
    cin >> t;

    while (t--)
    {
        int n, p, k;
        cin >> n >> p >> k;

        char ar[n];
        for (int i = 0; i < n; i++)
            cin >> ar[i];

        int x, y;
        cin >> x >> y;
        int mi = LONG_LONG_MAX;
        for (int i = p - 1; i < p - 1 + k && i < n; i++)
        {
            int cnt = (i - p + 1) * y;
            for (int j = i; j < n; j += k)
                cnt = (ar[j] == '0') * x + min(cnt, y * (j - p + 1));
            mi = min(mi, cnt);
        }

        cout << mi << '\n';
    }
}