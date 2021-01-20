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

        string s;
        cin >> s;

        bool st1 = 0, st2 = 0, st = 0, st3 = 0, st4 = 0;
        if (s[0] == '2' && s[1] == '0' && s[n - 2] == '2' && s[n - 1] == '0')
            st1 = 1;
        if (s[0] == '2' && s[1] == '0' && s[2] == '2' && s[n - 1] == '0')
            st2 = 1;
        if (s[0] == '2' && s[n - 3] == '0' && s[n - 2] == '2' && s[n - 1] == '0')
            st3 = 1;
        if (s[0] == '2' && s[1] == '0' && s[2] == '2' && s[3] == '0')
            st = 1;
        if (s[n - 4] == '2' && s[n - 3] == '0' && s[n - 2] == '2' && s[n - 1] == '0')
            st4 = 1;

        if (st1 || st2 || st3 || st4 || st)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}