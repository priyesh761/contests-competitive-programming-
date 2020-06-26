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

ll powr(ll a, ll b)
{
    ll ans = 1;

    while (b > 0)
    {
        if (b & 1LL)
            ans *= a;
        a *= a;
        b >>= 1;
    }
    return ans;
}

int main()
{
    init;

    string s = "codeforces";
    ll k;
    cin >> k;
    int ii = 1;
    // cout << k << endl;
    while (powr(ii, 10) <= k)
    {
        //cout << i << endl;
        //  cout << powr(i, 10) << endl;
        ii++;
    }

    ii--;
    // cout << ii << endl;
    int x = 0, y = 10;
    while (x <= 10)
    {
        if (powr(ii + 1, x) * powr(ii, y) >= k)
            break;
        x++;
        y--;
    }
    //  cout << x << ' ' << y << endl;
    // cout << s << endl;
    string res = "";
    for (int i = 0; i < x; i++)
        for (int j = 0; j < ii + 1; j++)
        {
            res += s[i];
            //     cout << res << endl;
        }

    for (int i = 0; i < y; i++)
        for (int j = 0; j < ii; j++)
        {
            res += s[x + i];
            //    cout << res << endl;
        }

    cout << res << '\n';
}