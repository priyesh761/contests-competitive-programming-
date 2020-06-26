#include <bits/stdc++.h>
using namespace std;

using ll = unsigned long long;
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

    ll ar[n];
    int freq[32];
    MS(freq, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];

        for (int j = 0; j < 22; j++)
        {
            if (ar[i] & (1LL << j))
                freq[j]++;
        }
    }
    bool st = 1;
    ll ans = 0;
    while (st)
    {
        st = 0;
        ll res = 0;
        for (int i = 0; i < 22; i++)
        {
            if (freq[i])
            {
                st = 1;
                res |= (1 << i);
                freq[i]--;
            }
        }
        // cout << res << endl;
        ans += (res * res);
    }
    cout << ans << endl;
}