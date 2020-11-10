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
    int n, p;
    cin >> n >> p;
    string s;
    cin >> s;

    if (p > n / 2)
    {
        reverse(s.begin(), s.end());
        p = n - p + 1;
    }
    int mn = INT_MAX, mx = INT_MIN;
    int i = 0, j = n - 1;
    int cnt = 0;
    while (i < j)
    {
        if (s[i] != s[j])
        {
            int ub = max(s[i], s[j]);
            int lb = min(s[i], s[j]);
            cnt += min(ub - lb, lb - 'a' + 'z' - ub + 1);
            mn = min(mn, i);
            mx = max(mx, i);
        }
        i++;
        j--;
    }
    // cout << mn << ' ' << mx << ' ' << cnt << ' ' << p << '\n';
    if (mn != INT_MAX)
    {
        cnt += (mx - mn);
        cnt += min(abs(mx + 1 - p), abs(mn + 1 - p));
    }
    cout << cnt;
}