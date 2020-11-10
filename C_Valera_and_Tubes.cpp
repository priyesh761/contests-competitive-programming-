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

void route(int &x, int &y, int &d, int &m)
{
    y += d;
    if (y == -1 || y == m)
        x++;
    if (y == -1)
        d = 1, y = 0;
    if (y == m)
        d = -1, y = m - 1;
}
int main()
{
    init;
    int n, m, k;
    cin >> n >> m >> k;

    int var = k - 1;
    int x, y, d;
    x = y = 0;
    d = 1;
    while (var--)
    {
        cout << 2 << ' ' << x + 1 << ' ' << y + 1 << ' ';
        route(x, y, d, m);
        cout << x + 1 << ' ' << y + 1 << '\n';
        route(x, y, d, m);
    }

    cout << n * m - 2 * (k - 1) << ' ';

    while (x < n)
    {
        cout << x + 1 << ' ' << y + 1 << ' ';
        route(x, y, d, m);
    }
}