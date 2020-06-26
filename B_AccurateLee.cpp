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
        int st;
        string res, res1, res2;
        bool bb = 0;
        while (i < s.length() && s[i] == '0')
        {
            res1 += s[i];
            i++;
        }

        int j = n - 1;
        while (j >= 0 && s[j] == '1')
        {
            res2 += s[j];
            j--;
        }
        if (i < j)
            res = "0";

        cout << res1 + res + res2 << endl;
    }
}