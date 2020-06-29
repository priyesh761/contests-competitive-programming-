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

int Msize = 1e5;
vi prime;
void P()
{
    vector<bool> vis(Msize);
    prime.PB(2);
    for (ll i = 3; i < Msize; i += 2)
        if (vis[i] == 0)
        {
            prime.PB(i);
            for (ll j = i * i; j < Msize; j += i)
                vis[j] = 1;
        }
}

int main()
{
    init;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int t = 0, th = 0;
        while (n % 2 == 0)
        {
            n /= 2;
            t++;
        }
        while (n % 3 == 0)
        {
            n /= 3;
            th++;
        }
        if (n != 1 || t > th)
        {
            cout << -1 << '\n';
            continue;
        }

        int ans = 0;
        ans += th;
        ans += th - t;

        cout << ans << '\n';
    }
}