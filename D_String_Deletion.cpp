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
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        int i = 0;
        int cnt = 0;

        vector<pair<int, int>> v;
        while (i < s.length())
        {
            int j = i;
            while (i < s.length() && s[i] == s[j])
                i++;
            if (i - j > 1)
                v.push_back({j, i - 2});
        }
        reverse(v.begin(), v.end());

        i = 0;
        while (i < s.length())
        {
            if (s[i] == '2')
            {
                i++;
                continue;
            }
            int j = i;

            while (i < s.length() && s[i] == s[j])
                i++;
            while (!v.empty() && v.back().F < i)
                v.pop_back();
            if (i - j == 1)
            {
                if (v.empty())
                {
                    while (i < s.length() && s[i] == '2')
                        i++;
                    i++;
                }
                else
                {
                    s[v.back().F] = '2';
                    if (v.back().F == v.back().S)
                        v.pop_back();
                    else
                        v.back().F++;
                }
            }
            // cout << i << ' ' << j << '\n';
            cnt++;
        }
        cout << cnt << '\n';
    }
}