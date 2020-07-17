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
        int n;
        cin >> n;

        int x, y;
        int ans1 = 0, ans2 = 0;
        int ar[n], br[n];
        MS(ar, 0);
        MS(br, 0);
        for (int i = 0; i < n; i++)
        {

            cin >> x >> y;
            while (x > 0)
            {
                ar[i] += x % 10;
                x /= 10;
            }
            while (y > 0)
            {
                br[i] += y % 10;
                y /= 10;
            }
            if (ar[i] > br[i])
                ans1++;
            else if (br[i] > ar[i])
                ans2++;
            else
                ans1++, ans2++;
        }

        if (ans1 == ans2)
            cout << "2 " << ans1 << '\n';
        else if (ans1 > ans2)
            cout << "0 " << ans1 << '\n';
        else
            cout << "1 " << ans2 << '\n';
    }
}