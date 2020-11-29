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
        string s;
        cin >> s;

        int cnt = 0, cnt2 = 0, cnt3 = 0;
        stack<char> st;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '(')
                cnt2++;
            else if (s[i] == '[')
                cnt3++;
            else if (s[i] == ')' && cnt2)
            {
                cnt2--;
                cnt++;
            }
            else if (s[i] == ']' && cnt3)
            {
                cnt3--;
                cnt++;
            }
        }
        cout << cnt << '\n';
    }
}