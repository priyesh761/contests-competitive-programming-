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
        int n, x;
        cin >> n >> x;

        int ar[n];
        for (int i = 0; i < n; i++)
            cin >> ar[i];

        map<int, int, greater<int>> mp;

        for (int i = 0; i < n; i++)
        {
            int tp;
            cin >> tp;
            mp[tp]++;
        }
        bool st = 1;
        for (int i = 0; i < n; i++)
        {

            int req = x - ar[i];
            auto it = mp.lower_bound(req);
            if (it == mp.end())
                st = 0;
            else
            {
                it->second--;
                if (it->second == 0)
                    mp.erase(it);
            }
        }

        if (st)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
}