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
    int n, m;
    cin >> n >> m;

    vector<set<char>> v(m);
    string s;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        for (int j = 0; j < m; j++)
            v[j].insert(s[j]);
    }

    ll ans = 1;
    for (auto &i : v)
        ans = (ans * i.size()) % mod;

    cout << ans;
}