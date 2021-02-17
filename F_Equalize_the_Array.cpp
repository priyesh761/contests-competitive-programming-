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

        vector<int> ar(n);

        for (int i = 0; i < n; i++)
            cin >> ar[i];

        sort(ar.begin(), ar.end());

        vector<ll> freq(n + 10);
        vector<ll> ans(n + 10);
        int i = 0;
        ll mx = 0;
        while (i < n)
        {
            ll j = i;
            while (i < n && ar[i] == ar[j])
                i++;
            freq[i - j]++;
            mx = max(mx, i - j);
        }
        mx += 10;
        ll psum = 0;
        for (int i = 0; i < mx; i++)
        {
            ans[i] += psum;
            psum += freq[i] * i;
        }
        psum = 0;
        ll pfreq = 0;
        for (int i = mx - 1; i >= 0; i--)
        {
            ans[i] += psum;
            pfreq += freq[i];
            psum += pfreq;
        }
        // for (int i = 0; i < freq.size(); i++)
        //     cout << freq[i] << ' ';
        // cout << '\n';
        // for (int i = 0; i < ans.size(); i++)
        //     cout << i << '-' << ans[i] << "  ";
        // cout << '\n';
        ll mi = *min_element(ans.begin(), ans.begin() + mx);
        cout << mi << endl;
    }
}