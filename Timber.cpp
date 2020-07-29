// Facebook hackercup qualification round
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

//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    int t;
    cin >> t;

    for (int tq = 1; tq <= t; tq++)
    {
        int n;
        cin >> n;

        map<ll, ll> mp;

        vector<pair<ll, ll>> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i].F >> v[i].S;
        }
        sort(v.begin(), v.end());

        ll maxi = 0;
        for (auto& i : v)
        {
            mp[i.F + i.S] = max(mp[i.F + i.S], mp[i.F] + i.S);
            mp[i.F] = max(mp[i.F], mp[i.F - i.S] + i.S);
            maxi = max({maxi, mp[i.F], mp[i.F + i.S]});
        }
        cout << "Case #" << tq << ": " << maxi << '\n';
    }
}