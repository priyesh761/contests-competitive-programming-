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
    int n;

    cin >> n;

    ll ar[n];
    for (int i = 0; i < n; i++)
        cin >> ar[i];

    sort(ar, ar + n);
    set<ll > st;
    for (ll i = 1; i < n; i++)
        st.insert(ar[i] - ar[i - 1]);

    if (n == 1)
        cout << -1;
    else if (st.size() > 2)
        cout << 0;
    else if (st.size() > 1)
    {
        ll v1 = *st.begin();
        ll v2 = *(++st.begin());
        ll ct1 = 0, ct2 = 0, ind1 = -1, ind2 = -1;
        for (ll i = 1; i < n; i++)
        {
            if (ar[i] - ar[i - 1] == v1)
                ct1++;
            else
                ct2++;
        }
        if (ct1 != 1 && ct2 != 1)
            cout << 0;
        else if ((v1 % 2 == 0 && v1 / 2 == v2 && ct1 == 1) || (v2 % 2 == 0 && v2 / 2 == v1 && ct2 == 1))
        {
            cout << 1 << '\n';
            ll f1 = 0;
            if (v1 % 2 == 0 && v1 / 2 == v2 && ct1 == 1)
                f1 = v1;
            else
                f1 = v2;
            for (ll i = 1; i < n; i++)
            {
                if (ar[i] - ar[i - 1] == f1)
                {
                    if (f1)
                        cout << (ar[i] + ar[i - 1]) / 2;
                }
            }
        }
        else
            cout << 0;
    }
    else
    {
        ll d = ar[1] - ar[0];
        cout << 1 + (d != 0) + (n == 2 && d && d % 2 == 0) << '\n';
        cout << ar[0] - d << ' ';
        if (n == 2 && d && d % 2 == 0)
            cout << (ar[0] + ar[1]) / 2 << ' ';
        if (d)
            cout << ar[n - 1] + d;
    }
}