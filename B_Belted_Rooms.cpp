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

        vi ind(n), out(n);

        string s;
        cin >> s;

        vector<vi> G;
        int left = 0, right = 0;
        int cnt = 0;
        set<int> st;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '-')
            {
                st.insert(i);
                st.insert((i + 1) % n);
            }
            if (s[i] == '-' || s[i] == '>')
                left++;
            if (s[i] == '-' || s[i] == '<')
                right++;
        }
        if (left == n || right == n)
        {
            cout << n << '\n';
        }
        else
        {
            cout << st.size() << '\n';
        }
    }
}