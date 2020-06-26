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
        string s;
        cin >> s;

        int cnt = 0;

        int i = 0;
        int z = 0, o = 0;
        while (i < s.length())
        {
            if (s[i] == '0')
                z++;
            else
                o++;
            i++;
        }
        cnt = min(z, o);

        if (cnt % 2 == 0)
            cout << "NET\n";
        else
        {
            cout << "DA\n";
        }
    }
}