#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define int ll
#define mod 1000000007
#define init ios::sync_with_stdio(0), cin.tie(0);
typedef vector<int> vi;
typedef pair<int, int> pi;
#define MS(x, y) memset(x, y, sizeof(x))
#define F first
#define S second
#define PB push_back
#define MP make_pair

int cnt = INT_MAX;
int F(int n, int num)
{
    if (num < 0)
        return INT_MAX;
    n -= (num + 1);
    return (int)ceil((double)n / (double)(num + 1));
}
int32_t main()
{
    init;
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int mn = n - 1;

        int low = 0, high = n + 10;

        /*
        while (low < high)
        {
            int mid = low + (high - low) / 2;

            int tmp = F(n, mid);
            int tmp1 = F(n, mid + 1);
            int tmp2 = F(n, mid - 1);
            mn = min({mn, mid + tmp, mid + 1 + tmp1, mid - 1 + tmp2});

            if (mid - 1 + tmp2 >= mid + tmp && mid + 1 + tmp1 <= mid + tmp)
            {
                low = mid + 1;
            }
            else
                high = mid;
        }
        */
        for (int i = 0; i < n; i++)
            if (mn >= i + F(n, i))
            {
                mn = i + F(n, i);
            }
            else
                break;

        cout << mn << '\n';
    }
}