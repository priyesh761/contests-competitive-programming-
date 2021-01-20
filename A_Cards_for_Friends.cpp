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
        ll w, h, n;
        cin >> w >> h >> n;
        ll cnt1 = 1, cnt2 = 1;
        while (w > 1 && w % 2 == 0)
        {
            w /= 2;
            cnt1 *= 2;
        }
        while (h > 1 && h % 2 == 0)
        {
            h /= 2;
            cnt2 *= 2;
        }

        if (cnt1 * cnt2 < n)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
}