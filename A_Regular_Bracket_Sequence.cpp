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
        string s;
        cin >> s;

        int q = 0;
        bool st = 1, st1 = 0, st2 = 0, st3 = 0;
        for (int i = 0; i < s.length(); i++)
            if (s[i] == '(')
            {
                if (q % 2 == 1)
                    st2 = 1;
                q = 0;
            }
            else if (s[i] == ')')
            {
                if (q % 2 == 1)
                    st3 = 1;
                q = 0;
            }
            else
                q++;

        if (q % 2)
            st1 = 1;
        int cnt = 0;
        cnt += st1;
        cnt += st2;
        cnt += st3;

        if ((cnt == 0 || cnt == 2) && s[0] != ')' && s[s.length() - 1] != '(')
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}