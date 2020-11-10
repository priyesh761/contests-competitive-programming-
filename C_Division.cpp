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

ll Msize = 1e5;
vector<ll> prime;
vector<bool> vis(Msize);
void P()
{
    prime.push_back(2);
    for (ll i = 3; i < Msize; i += 2)
        if (vis[i] == 0)
        {
            prime.push_back(i);
            for (ll j = i * i; j < Msize; j += i)
                vis[j] = 1;
        }
}

int main()
{
    init;
    P();
    int t;
    cin >> t;

    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        if (a % b)
        {
            cout << a << '\n';
            continue;
        }
        int i = 0;
        map<int, int> mp;
        ll bb = b;
        while (b > 1 && prime[i] * prime[i] <= bb)
        {
            int cnt = 0;
            while (b % prime[i] == 0)
                b /= prime[i], cnt++;

            if (cnt != 0)
                mp[prime[i]] = cnt;
            i++;
        }

        if (b != 1)
            mp[b]++;
        ll ans = 1;
        for (auto i : mp)
        {
            ll tmp = a;
            int cnt = 0;
            while (tmp % i.first == 0)
                tmp /= i.first, cnt++;

            tmp = a;
            while (cnt >= i.second)
                tmp /= i.first, cnt--;

            ans = max(ans, tmp);
        }
        cout << ans << '\n';
    }
}