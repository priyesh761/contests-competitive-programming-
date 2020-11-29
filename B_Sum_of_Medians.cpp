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
        int n, k;
        cin >> n >> k;

        int sz = n * k;
        vector<int> ar(sz);
        for (int i = 0; i < sz; i++)
            cin >> ar[i];

        sort(ar.begin(), ar.end());

        int med = (n + 1) / 2;
        int i = 0;
        while (i < (med - 1) * k)
        {
            i++;
        }

        ll sum = 0;
        int gp = n / 2 + 1;
        while (i < sz)
        {
            sum += ar[i];
            i += gp;
        }
        cout << sum << '\n';
    }
}