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
        int n;
        cin >> n;

        int ar[n];
        map<int, int> mp, mp1, mp2;
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            if (mp.count(ar[i]))
                mp1[ar[i]] += ((i - mp[ar[i]]) != 1);
            else
                mp1[ar[i]] += (i != 0);

            mp[ar[i]] = i;
        }

        if (mp.size() == 1)
            cout << 0;
        else
        {
            int mi = INT_MAX;

            for (auto i : mp)
            {
                //cout << i.F << ' ' << i.S << ' ' << mp1[i.F] << '\n';
                mi = min(mi, mp1[i.F] + (n - 1 != i.S));
            }
            cout << mi;
        }
        cout << '\n';
    }
}