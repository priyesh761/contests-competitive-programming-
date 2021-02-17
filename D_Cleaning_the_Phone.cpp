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
        ll n, m;
        cin >> n >> m;
        vector<int> ar(n);
        vector<int> br(n);
        vector<ll> on, tw;
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            sum += ar[i];
        }

        for (int i = 0; i < n; i++)
        {
            cin >> br[i];
            if (br[i] == 1)
                on.push_back(ar[i]);
            else
                tw.push_back(ar[i]);
        }
        if (sum < m)
        {
            cout << -1 << '\n';
            continue;
        }

        sort(on.begin(), on.end(), greater<int>());
        sort(tw.begin(), tw.end(), greater<int>());
        tw.insert(tw.begin(), 0);
        on.insert(on.begin(), 0);
        for (int i = 1; i < tw.size(); i++)
            tw[i] += tw[i - 1];
        for (int i = 1; i < on.size(); i++)
            on[i] += on[i - 1];

        ll cost = INT_MAX;

        for (int i = 0; i < tw.size(); i++)
        {
            ll req = m - tw[i];
            ll rcst = i * 2;
            auto it = lower_bound(on.begin(), on.end(), req);
            //cout << req << '-' << rcst << '-' << *it << '-';

            if (req > 0 && it != on.end())
            {
                req -= *it;
                rcst += it - on.begin();
            }
            //  cout << rcst << endl;
            if (req <= 0)
                cost = min(cost, rcst);
        }
        cout << cost << '\n';
    }
}