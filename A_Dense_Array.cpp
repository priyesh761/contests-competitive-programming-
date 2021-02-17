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
        for (int i = 0; i < n; i++)
            cin >> ar[i];
        int cnt = 0;
        for (int i = 1; i < n; i++)
        {
            int mx = max(ar[i], ar[i - 1]);
            int mi = min(ar[i], ar[i - 1]);
            while (mi * 2 < mx)
            {
                mx = (mx % 2) + mx / 2;
                cnt++;
            }
        }
        cout << cnt << '\n';
    }
}