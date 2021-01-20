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

        vector<ll> ar(n);
        for (int i = 0; i < n; i++)
            cin >> ar[i];

        ll sum = 0;
        for (int i = n - 2; i >= 0; i--)
            sum += abs(ar[i] - ar[i + 1]);

        ll mx = 0;
        for (int i = 1; i < n - 1; i++)
            mx = max(mx, abs(abs(ar[i - 1] - ar[i + 1]) - (abs(ar[i] - ar[i - 1]) + abs(ar[i] - ar[i + 1]))));

        if (abs(ar[0] - ar[1]) > mx)
            mx = abs(ar[0] - ar[1]);
        if (abs(ar[n - 2] - ar[n - 1]) > mx)
            mx = abs(ar[n - 2] - ar[n - 1]);

        sum -= mx;
        cout << sum << '\n';
    }
}