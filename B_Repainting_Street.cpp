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
        int n, k;
        cin >> n >> k;

        int ar[n];
        int cnt = 1;
        set<int> st;
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            st.insert(ar[i]);
        }

        int ans = INT_MAX;
        for (auto col : st)
        {
            int day = 0;
            int i = 0;
            while (i < n)
            {
                if (ar[i] != col)
                {
                    i += k;
                    day++;
                }
                else
                    i++;
            }
            ans = min(ans, day);
        }
        cout << ans << '\n';
    }
}