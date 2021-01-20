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

        int ar[n];

        for (int i = 0; i < n; i++)
            cin >> ar[i];

        int ans = 0;
        int j = 0;
        bool st = 1;
        for (int i = 1; i < n; i++)
        {
            if (ar[i - 1] <= ar[i])
                continue;
            while (ar[j] <= x && j < i)
                j++;
            while (j < i)
            {
                if (ar[j] > x)
                {
                    swap(ar[j], x);
                    ans++;
                }
                j++;
            }
            if (ar[i - 1] > ar[i])
            {
                st = 0;
                break;
            }
        }

        if (st)
            cout << ans << '\n';
        else
            cout << -1 << '\n';
    }
}