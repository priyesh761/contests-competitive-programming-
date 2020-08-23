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
        int x1, y1, z1;
        int x2, y2, z2;

        cin >> x1 >> y1 >> z1;
        cin >> x2 >> y2 >> z2;

        int tmp = min(z1, y2);
        z1 -= tmp;
        y2 -= tmp;
        ll ans = tmp * 2;

        tmp = min(z2, x1);
        z2 -= tmp;
        x1 -= tmp;

        tmp = min(z2, z1);
        z2 -= tmp;
        z1 -= tmp;

        tmp = min(z2, y1);
        ans -= 2 * tmp;

        cout << ans << '\n';
    }
}