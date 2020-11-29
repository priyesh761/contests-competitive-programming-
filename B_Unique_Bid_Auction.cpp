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
        map<int, int> mp;

        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            mp[ar[i]]++;
        }
        int mi = INT_MAX;
        for (auto i : mp)
            if (i.S == 1)
                mi = min(mi, i.first);
        if (mi == INT_MAX)
            cout << -1;
        else
        {
            for (int i = 0; i < n; i++)
                if (ar[i] == mi)
                {
                    mi = i + 1;
                    break;
                }
            cout << mi;
        }
        cout << '\n';
    }
}