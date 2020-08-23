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

        vi ar(n);
        vi dup(n);
        int mi = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            mi = min(ar[i], mi);
            dup[i] = ar[i];
        }

        sort(dup.begin(), dup.end());
        bool st = 1;
        for (int i = 0; i < n; i++)
        {
            if (dup[i] != ar[i] && dup[i] % mi != 0)
            {
                st = 0;
                break;
            }
        }

        if (st)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}