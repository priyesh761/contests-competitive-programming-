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
        int a, b;
        cin >> a >> b;

        string s;
        cin >> s;

        int i = 0, c1 = 0, c2 = 0;
        ll ans = 0, ic = 0, zc = 0;
        while (i < s.length())
        {
            c1 = i;
            while (i < s.length() && s[i] == '1')
                i++;

            if (i > c1)
            {
                if (ic != 0)
                {
                    // cout << ans << ' ' << zc << endl;
                    ans += min(b * zc, (ll)a);
                }
                else
                    ans += a;
            }
            ic = i - c1;
            c2 = i;

            while (i < s.length() && s[i] == '0')
                i++;
            zc = i - c2;
        }
        cout << ans << '\n';
    }
}