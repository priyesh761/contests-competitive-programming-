
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
        vector<string> v(n);
        map<char, int> mp;

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            for (auto j : v[i])
                mp[j]++;
        }
        bool st = 1;
        for (auto i : mp)
            if ((i.second % n) != 0)
            {
                st = 0;
                break;
            }
        if (st)
            cout << "YES\n";
        else
        {
            cout << "NO\n";
        }
    }
}