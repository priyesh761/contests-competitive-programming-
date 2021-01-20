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

        string s;

        int cnt = 0;

        for (int i = 0; i < n; i++)
        {
            s += 'a' + cnt;
            cnt++;
            cnt %= 3;
        }

        cout << s << '\n';
    }
}