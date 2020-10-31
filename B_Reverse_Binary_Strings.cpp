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

int func(string s)
{
    int mi1 = 0;
    for (int i = 1; i < s.length(); i++)
        if (s[i] == s[i - 1])
            mi1++;
    return mi1;
}

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

        int mi1 = 0;

        cout << (func(s) + 1) / 2 << '\n';
    }
}