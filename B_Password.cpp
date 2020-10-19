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

int kmp(string &s)
{

    vector<int> pre(s.length());

    for (int i = 1; i < s.length(); i++)
    {
        int l = pre[i - 1];
        int cnt = 0;
        while (l > 0 && s[i] != s[l] && cnt < 10)
            l = pre[l - 1];

        if (s[i] == s[l])
            l++;
        pre[i] = l;
    }

    int n = pre.size();

    for (int i = 0; i < s.length(); i++)
        cout << pre[i] << ' ';
    cout << '\n';
    while (n > 0)
    {
        n = pre[n - 1];
        for (int i = 1; i < s.length() - 1; i++)
            if (pre[i] == n)
                return n;
    }
    return 0;
}
int main()
{
    init;

    string s;
    cin >> s;
    int n = kmp(s);
    if (n == 0)
        cout << "Just a legend";
    else
        cout << s.substr(0, n);
}