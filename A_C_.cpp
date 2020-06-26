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
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b, n;
        cin >> a >> b >> n;

        if (a > b)
            swap(a, b);

        ll p = 0, c = 1;
        ll cnt = 0;
        while (p * a + c * b <= n)
        {

            ll tmp = p;
            p = c;
            c += tmp;
            // cout << c << ' ';
            cnt++;
        }
        cout << cnt;
        cout << '\n';
    }
}