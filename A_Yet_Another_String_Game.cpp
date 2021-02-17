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

        for (int i = 0; i < s.length(); i++)
        {
            if (i % 2 == 0)
            {

                if (s[i] == 'a')
                    s[i] = 'b';
                else
                    s[i] = 'a';
            }
            else
            {
                if (s[i] == 'z')
                    s[i] = 'y';
                else
                    s[i] = 'z';
            }
        }
        cout << s << '\n';
    }
}