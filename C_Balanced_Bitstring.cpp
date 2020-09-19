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
        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        int cnt = 0;
        int qm = 0;
        bool st = 1;
        for (int i = 0; i < k; i++)
        {
            char ch = '?';
            for (int j = i; j < n; j += k)
            {
                if (s[j] != '?')
                {
                    ch = s[j];
                    break;
                }
            }
            for (int j = i; j < n; j += k)
            {
                if (s[j] == '?')
                {
                    s[j] = ch;
                }
                else
                {
                    if (s[j] != ch)
                    {
                        st = 0;
                        break;
                    }
                }
            }
        }

        for (int i = 0; i < k; i++)
        {
            if (s[i] == '0')
                cnt--;
            if (s[i] == '1')
                cnt++;
            if (s[i] == '?')
                qm++;
        }
        //cout << qm << cnt << endl;
        if (qm < abs(cnt))
            st = 0;
        else
        {
            qm -= abs(cnt);
            if (qm % 2)
                st = 0;
        }

        if (st)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}