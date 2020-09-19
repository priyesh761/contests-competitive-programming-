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
        int n, x, y;
        cin >> n >> x >> y;

        int size = y - x;
        for (int i = 1; i <= y - x; i++)
        {
            if ((y - x) % i == 0)
            {
                if ((y - x) / i <= n - 1)
                {
                    //  cout << i << endl;
                    size = min(size, i);
                }
            }
        }
        ll var = y + size;
        while (n > 0 && var - size > 0)
        {
            var -= size;
            cout << var << ' ';
            n--;
        }
        var = y;
        while (n > 0)
        {
            var += size;
            cout << var << ' ';
            n--;
        }
        cout << '\n';
    }
}