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
        string s = "R";
        cin >> s;

        s += 'R';

        int i = 0, mx = 0;

        while (i < s.length())
        {
            int j = i;
            while (i < s.length() && s[i] == 'L')
                i++;
            mx = max(mx, i - j + 1);
            if (i < s.length() && s[i] == 'R')
                i++;
        }
        cout << mx << '\n';
    }
}