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

        vector<int> ar(n);
        for (int i = 0; i < n; i++)
            cin >> ar[i];

        int mx = *max_element(ar.begin(), ar.end());
        int mn = *min_element(ar.begin(), ar.end());

        if (mx == mn)
            cout << "NO\n";
        else
        {
            map<int, vector<int>> mp;
            for (int i = 0; i < n; i++)
                mp[ar[i]].push_back(i);

            vector<pi> v;
            for (auto &i : mp)
                v.push_back({i.S.size(), i.F});

            int ind = mp[v.back().S].back();
            mp[v.back().S].pop_back();

            cout << "YES\n";
            for (int i = 0; i < mp[v[0].S].size(); i++)
                cout << ind + 1 << ' ' << mp[v[0].S][i] + 1 << '\n';
            for (int i = 1; i < v.size(); i++)
            {
                for (int j = 0; j < mp[v[i].S].size(); j++)
                    cout << mp[v[i - 1].S][0] + 1 << ' ' << mp[v[i].S][j] + 1 << '\n';
            }
        }
    }
}