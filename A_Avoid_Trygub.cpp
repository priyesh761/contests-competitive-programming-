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
        string s;
        cin >> s;
        int j = 0;
        for (int i = 0; i < s.length(); i++)
            if (s[i] == 'b')
            {
                swap(s[i], s[j]);
                j++;
            }
        cout << s << '\n';
    }
}