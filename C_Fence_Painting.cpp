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
        int n, m;
        cin >> n >> m;

        vector<int> ar(n), b(n), c(m), d(m);
        for (int i = 0; i < n; i++)
            cin >> ar[i];

        map<int, vector<int>> mp;
        map<int, int> st;
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            if (b[i] != ar[i])
                mp[b[i]].push_back(i + 1);
            st[b[i]] = i + 1;
        }
        bool fl = 1;
        vector<int> cnt;
        for (int i = 0; i < m; i++)
        {
            cin >> c[i];
            if (mp[c[i]].size() > 0)
            {
                int val = mp[c[i]].back();
                while (cnt.size() > 0)
                {
                    d[cnt.back()] = val;
                    cnt.pop_back();
                }
                d[i] = val;
                mp[c[i]].pop_back();
            }
            else if (st.count(c[i]))
            {
                int val = st[c[i]];
                while (cnt.size() > 0)
                {
                    d[cnt.back()] = val;
                    cnt.pop_back();
                }
                d[i] = val;
            }
            else
            {
                cnt.push_back(i);
            }
        }
        for (auto &i : mp)
        {
            if (i.S.size() > 0)
            {
                cnt.push_back(-100);
                break;
            }
        }
        if (cnt.size() != 0)
            cout << "NO";
        else
        {
            cout << "YES\n";
            for (auto i : d)
                cout << i << ' ';
        }
        cout << '\n';
    }
}