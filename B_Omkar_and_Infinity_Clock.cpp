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
        ll n, k;
        cin >> n >> k;

        ll ar[n];

        for (int i = 0; i < n; i++)
            cin >> ar[i];

        k--;
        ll tmp = *max_element(ar, ar + n);

        for (int i = 0; i < n; i++)
            ar[i] = tmp - ar[i];

        if (k & 1)
        {
            ll tmp = *max_element(ar, ar + n);

            for (int i = 0; i < n; i++)
                ar[i] = tmp - ar[i];
        }

        for (int i = 0; i < n; i++)
            cout << ar[i] << ' ';
        cout << '\n';
    }
}