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
    int n;
    cin >> n;

    map<ll, ll> mp;
    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        mp[x]++;
        sum += x;
    }

    ll q;
    cin >> q;
    // cout << sum << endl;
    while (q--)
    {
        ll x, y;
        cin >> x >> y;
        ll cnt = mp[x];
        sum -= (cnt * x);
        mp[x] = 0;
        sum += (cnt * y);
        mp[y] += cnt;
        cout << sum << '\n';
    }
}