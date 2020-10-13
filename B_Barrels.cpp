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

    while (t--)
    {
        int n, k;

        cin >> n >> k;

        vector<ll> ar(n);
        for (int i = 0; i < n; i++)
            cin >> ar[i];

        sort(ar.begin(), ar.end());
        ll mi = ar[0];
        for (int i = n - 2; i >= 0 && k > 0; i--)
        {
            ar[n - 1] += ar[i];
            mi = 0;
            k--;
        }

        cout << ar[n - 1] - mi << '\n';
    }
}