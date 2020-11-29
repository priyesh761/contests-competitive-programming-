#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define mod 1000000007
#define init ios::sync_with_stdio(0), cin.tie(0);
typedef pair<int, int> pi;
#define F first
#define S second

int Msize = 3e5;
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

        ll n;
        cin >> n;

        ll N = n;
        int i = 0;

        map<ll, ll> mp;
        int mx = 0;
        while (prime[i] * prime[i] <= N)
        {
            int cnt = 0;
            while (n % prime[i] == 0)
            {
                n /= prime[i];
                cnt++;
            }
            if (cnt != 0)
                mp[prime[i]] = cnt;
            mx = max(mx, cnt);
            i++;
        }
        if (n != 1)
        {
            mp[n]++;
            mx = max(mx, 1);
        }

        cout << mx << '\n';
        vector<ll> arr(mx);
        for (int i = 0; i < mx; i++)
        {
            ll prod = 1;
            for (auto &i : mp)
            {
                if (i.S != 0)
                {
                    prod *= i.F;
                    i.S--;
                }
            }
            arr[i] = prod;
        }
        for (int i = mx - 1; i >= 0; i--)
            cout << arr[i] << ' ';
        cout << '\n';
    }
}