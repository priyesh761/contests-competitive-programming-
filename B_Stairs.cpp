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

ll func(ll n)
{
    return (n * (n + 1)) / 2;
}
int main()
{
    init;
    int t;
    cin >> t;

    while (t--)
    {
        ll x;
        cin >> x;

        set<ll> st;
        int cnt = 0;
        ll n = 1;
        while (x > 0)
        {
            ll tmp = x;
            x -= func(n);
            n <<= 1;
            n |= 1;
            if (x < 0)
            {
                break;
            }
            cnt++;
        }

        cout << cnt << '\n';
    }
}