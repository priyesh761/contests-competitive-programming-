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

bool func(string &s, int ii)
{
    int curr = ii;
    bool ok = true;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '+')
            curr++;
        else
        {
            curr--;
        }

        if (curr < 0)
            return 0;
    }
    return 1;
}

int main()
{
    init;
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        int l = 0, h = 1e7;
        int ans = -1;

        vi ar(s.length());
        int iii = -1;
        for (int i = 0; i < s.length(); i++)
        {
            if (i != 0)
                ar[i] += ar[i - 1];
            if (s[i] == '+')
                ar[i]++;
            else
            {
                ar[i]--;
            }
        }
        ll res = 0;
        int ind = -1;
        int mini = 0;
        int sub = 0;
        for (int i = 0; i < ar.size(); i++)
        {
            if (ar[i] < mini)
            {

                res += (abs(ar[i]) - abs(mini)) * (i + 1);
                mini = ar[i];
                ind = i + 1;
            }
            //cout << ar[i] << ' ' << res << '\n';
        }
        res += s.length();
        cout << res << endl;
    }
}