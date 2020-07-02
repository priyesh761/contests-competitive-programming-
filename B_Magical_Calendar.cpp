#include <bits/stdc++.h>
using namespace std;

using ll = unsigned long long;
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
        ll n, r;
        cin >> n >> r;
        ll ans = 0;
        if (n <= r)
        {
            ans += (n * (n - 1)) / 2 + 1;
        }
        else
        {
            ans += (r * (r + 1)) / 2;
        }
        cout << ans << '\n';
    }
}