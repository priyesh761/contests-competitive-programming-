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
        int n, c0, c1, h;
        cin >> n >> c0 >> c1 >> h;

        string s;
        cin >> s;
        int cnt0 = 0, cnt1 = 0;
        for (int i = 0; i < n; i++)
            if (s[i] == '0')
                cnt0++;
            else
                cnt1++;

        if (cnt1 * (h + c0) < cnt1 * c1)
        {
            cout << cnt0 * c0 + cnt1 * (h + c0) << '\n';
        }
        else if (cnt0 * (h + c1) < cnt0 * c0)
        {
            cout << cnt1 * c1 + cnt0 * (h + c1) << '\n';
        }
        else
            cout << cnt0 * c0 + cnt1 * c1 << '\n';
    }
}