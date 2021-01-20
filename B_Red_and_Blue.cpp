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
        int n;

        cin >> n;

        int ar[n];
        int mx1 = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            if (i != 0)
                ar[i] += ar[i - 1];
            mx1 = max(mx1, ar[i]);
        }

        int m;
        cin >> m;
        int b[m];
        int mx2 = INT_MIN;
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
            if (i != 0)
                b[i] += b[i - 1];
            mx2 = max(mx2, b[i]);
        }

        cout << max({0, mx1, mx2, mx1 + mx2}) << '\n';
    }
}