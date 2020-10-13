#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define int ll
#define mod 1000000007
#define init ios::sync_with_stdio(0), cin.tie(0);
typedef vector<int> vi;
typedef pair<int, int> pi;
#define MS(x, y) memset(x, y, sizeof(x))
#define F first
#define S second
#define PB push_back
#define MP make_pair

int32_t main()
{
    init;
    int n;
    cin >> n;

    vector<int> v(n + 1);

    set<int> st;

    for (int i = 1; i <= n; i++)
        cin >> v[i];

    st.insert(0);
    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        v[i] += v[i - 1];
        if (st.count(v[i]))
        {

            cnt++;
            st.clear();
            st.insert(0);
            v[i] -= v[i - 1];
        }
        st.insert(v[i]);
    }

    cout << cnt;
}