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

    set<int> st;

    while (t--)
    {
        int n;
        cin >> n;

        int ans = INT_MAX;
        for (int i = 0; i < (1 << 10); i++)
        {
            int nn = i;
            int sm = 0;
            for (int i = 0; i < 10; i++)
            {
                if (nn & (1 << i))
                    sm += i;
            }
            string s;
            if (sm == n)
            {
                for (int i = 1; i < 10; i++)
                {
                    if (nn & (1 << i))
                        s += (char)(i + '0');
                }
                ans = min(ans, stoi(s));
            }
        }
        if (ans == INT_MAX)
            cout << -1 << '\n';
        else
            cout << ans << '\n';
    }
}