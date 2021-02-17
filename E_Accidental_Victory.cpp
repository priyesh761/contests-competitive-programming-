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

        vector<pair<ll, int>> ar(n);

        map<int, ll> mp;
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i].F;
            ar[i].S = i;
            mp[ar[i].F]++;
        }
        sort(ar.begin(), ar.end());
        set<int> st;
        for (int i = 0; i < n; i++)
        {
            if (st.count(ar[i].F) == 0)
            {
                ll nm = mp[ar[i].F];
                sum += (ar[i].F * nm);
                mp[ar[i].F] = sum;
                st.insert(ar[i].F);
            }
        }
        vector<bool> fl(n);
        fl[ar[n - 1].S] = 1;
        int cnt = 1;
        for (int i = n - 2; i >= 0; i--)
        {
            if (mp[ar[i].F] >= ar[i + 1].F)
            {
                fl[ar[i].S] = fl[ar[i + 1].S];
            }
            cnt += (fl[ar[i].S] == 1);
        }
        cout << cnt << '\n';
        for (int i = 0; i < n; i++)
            if (fl[i])
                cout << i + 1 << ' ';
        cout << '\n';
    }
}