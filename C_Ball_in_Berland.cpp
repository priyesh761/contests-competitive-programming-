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
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        int ar[c], br[c];

        map<int, int> by, gl;
        for (int i = 0; i < c; i++)
        {
            cin >> ar[i];
            by[ar[i]]++;
        }
        for (int i = 0; i < c; i++)
        {
            cin >> br[i];
            gl[br[i]]++;
        }

        ll ans = 0;
        int C = c;
        for (int i = 0; i < C; i++)
        {
            c--;
            by[ar[i]]--;
            gl[br[i]]--;
            ans += max(0, (c - (by[ar[i]] + gl[br[i]])));

            //cout << by[ar[i]] << ' ' << gl[br[i]] << ' ' << ans << endl;
        }
        cout << ans << '\n';
    }
}