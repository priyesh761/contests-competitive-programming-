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

        int ar[n], b[n], c[n];
        vector<ll> d(n);
        for (int i = 0; i < n; i++)
            cin >> ar[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];
        for (int i = 0; i < n; i++)
            cin >> c[i];
        d[0] = abs(b[1] - c[1]);
        for (int i = 1; i < n; i++)
        {
            d[i] = ar[i] + 1;
            if (b[i] != c[i])
                d[i] += max(d[i - 1] - abs(b[i] - c[i]), (ll)abs(b[i] - c[i]));
            //cout << d[i] << ' ';
        }
        d[0] = 0;
        cout << (*max_element(d.begin(), d.end())) << '\n';
    }
}