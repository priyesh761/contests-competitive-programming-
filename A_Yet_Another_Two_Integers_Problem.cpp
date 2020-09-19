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
        ll a, b;

        cin >> a >> b;

        ll diff = abs(a - b);

        int ans = diff / 10;
        diff -= (diff / 10) * 10;

        if (diff)
            ans++;

        cout << ans << endl;
    }
}