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

ll func(ll n, ll x)
{
    return (n - x) * (x + 1);
}

int main()
{
    init;
    int t;
    cin >> t;

    while (t--)
    {
        int n, d;
        cin >> n >> d;

        bool st = 0;
        for (int i = 0; i <= n; i++)
        {
            if (func(n, i) >= d)
            {
                st = 1;
                break;
            }
        }
        if (st)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}