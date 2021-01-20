#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define mod 1000000007
#define init ios::sync_with_stdio(0), cin.tie(0);
typedef pair<int, int> pi;
#define F first
#define S second

void computeLPSArray(string &str, vector<int> &lps)
{
    int M = str.length();
    int len = 0; //lenght of the previous longest prefix suffix
    int i;

    lps[0] = 0; //lps[0] is always 0
    i = 1;

    while (i < M)
    {
        if (str[i] == str[len])
        {
            len++;
            lps[i] = len;
            i++;
        }
        else // (pat[i] != pat[len])
        {
            if (len != 0)
            {
                len = lps[len - 1];
            }
            else
            {
                lps[i] = 0;
                i++;
            }
        }
    }
}

// Returns true if str is repetition of one of its substrings
// else return false.
int isRepeat(string str)
{
    int n = str.length();
    vector<int> lps(n);

    computeLPSArray(str, lps);

    int len = lps[n - 1];

    return (len > 0 && n % (n - len) == 0) ? n - len : n;
}
int main()
{
    init;
    int t;
    cin >> t;

    while (t--)
    {
        string a, b, c, d;
        cin >> c >> d;

        int l = isRepeat(c);

        int m = isRepeat(d);
        //cout << l << '-' << m << endl;
        if (l != m)
        {
            cout << -1 << '\n';
            continue;
        }
        a = c.substr(0, l);
        b = d.substr(0, m);
        //cout << a << "--" << b << endl;
        if (a != b)
        {
            cout << -1 << '\n';
            continue;
        }
        if (c.length() % d.length() == 0)
        {
            cout << c << '\n';
            continue;
        }
        int kk = c.length() / a.length();

        int ll = d.length() / b.length();
        kk = (kk * ll) / __gcd(kk, ll);
        //cout << a.length() * kk << '\n';
        for (int i = 0; i < kk; i++)
            cout << a;
        cout << '\n';
    }
}