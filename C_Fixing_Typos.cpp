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
    string s;
    cin >> s;

    int i = 0;
    bool st = 0;
    string res;
    while (i < s.length())
    {
        int j = i;
        while (i < s.length() && s[i] == s[j])
        {
            if (i - j < ((st) ? 1 : 2))
                res += s[i];
            i++;
        }
        if (i - j >= 2)
            st = !st;
        else
            st = 0;
    }

    cout << res;
}