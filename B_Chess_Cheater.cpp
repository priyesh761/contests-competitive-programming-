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

bool cmp(pi &a, pi &b)
{
    if (a.S == b.S)
        return a.F > b.F;
    return a.S < b.S;
}
int main()
{
    init;
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        int lll = (s[0] == 'L');
        ll score = (s[0] == 'W');

        for (int i = 1; i < n; i++)
        {
            if (s[i] == 'W')
                score += 1 + (s[i - 1] == 'W');
            lll += (s[i] == 'L');
        }

        vector<pair<int, int>> l;
        int i = 0;
        while (i < s.length() && s[i] == 'L')
            i++;

        int f = i;
        int j = n - 1;
        while (j >= i && s[j] == 'L')
            j--;

        f += n - 1 - j;
        while (i < j)
        {
            int tmp = i;
            while (i < j && s[i] == 'W')
                i++;
            int cnt = ((i - tmp) != 0);
            tmp = i;
            while (i < j && s[i] == 'L')
                i++;
            if (i - tmp > 0)
            {
                cnt += (i != s.length());
                cnt += 2 * (i - tmp) - 1;
                l.push_back({cnt, i - tmp});
            }
        }

        sort(l.begin(), l.end(), cmp);

        i = 0;
        while (i < l.size() && k >= l[i].S)
        {
            k -= l[i].S;
            score += l[i].F;
            i++;
        }

        if (i == l.size())
            score += min(f, k) * 2;
        else
            score += k * 2;

        if (lll == s.length())
            if (k > 0)
                score = min(lll, k) * 2 - 1;

        cout << score << '\n';
    }
}