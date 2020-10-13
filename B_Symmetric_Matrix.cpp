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

int func(int in, int ad, int n)
{
}

int main()
{
    init;
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int a = -1, b = -2, c = -3, d = -4;
        bool st = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> a >> b >> c >> d;
            if (b == c)
                st = 1;
        }
        if (m % 2)
            st = 0;
        if (st)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}