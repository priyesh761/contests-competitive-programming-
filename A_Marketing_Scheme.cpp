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
        ll l, r;
        cin >> l >> r;

        ll low = 0, high = l;
        bool st = 0;
        while (low <= high)
        {
            ll mid = low + (high - low) / 2;
            if (2 * mid > r)
            {
                st = 1;
                break;
            }
            else
                low = mid + 1;
        }

        if (st)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}