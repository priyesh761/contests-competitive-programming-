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
    int n;
    cin >> n;

    int ar[n];

    for (int i = 0; i < n; i++)
        cin >> ar[i];

    int row = n;
    map<int, vector<pi>> mp;
    vector<pi> res;
    bool st = 1;
    for (int i = n - 1; i >= 0; i--)
    {
        if (ar[i] == 1)
        {
            if (row == 0)
            {
                st = 0;
                break;
            }
            mp[1].push_back({row, i + 1});
            res.push_back({row, i + 1});
            row--;
        }
        if (ar[i] == 2)
        {
            if (mp[1].empty())
            {
                st = 0;
                break;
            }
            mp[2].push_back({mp[1].back().F, i + 1});
            res.push_back({mp[1].back().F, i + 1});
            mp[1].pop_back();
        }
        if (ar[i] == 3)
        {
            if ((mp[1].empty() && mp[2].empty() && mp[3].empty()) || row == 0)
            {
                st = 0;
                break;
            }
            int k;
            if (!mp[3].empty())
                k = 3;
            else if (!mp[2].empty())
                k = 2;
            else
                k = 1;

            res.push_back({row, i + 1});
            res.push_back({row, mp[k].back().S});

            row--;
            mp[k].pop_back();
            mp[3].push_back({row, i + 1});
        }
    }

    if (st)
    {
        cout << res.size() << '\n';
        for (auto &i : res)
            cout << i.F << ' ' << i.S << '\n';
    }
    else
        cout << "-1\n";
}