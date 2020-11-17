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
        int n;
        cin >> n;

        vector<int> ar(n);
        set<int> st;

        bool fl = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            if (st.count(ar[i]))
                fl = 1;
            st.insert(ar[i]);
        }

        if (fl)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}