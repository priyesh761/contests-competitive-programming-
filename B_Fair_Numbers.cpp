#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define mod 1000000007
#define init ios::sync_with_stdio(0), cin.tie(0);
typedef pair<int, int> pi;
#define F first
#define S second

bool check(ll n)
{
    string s = to_string(n);
    for (auto i : s)
    {
        int k = i - '0';
        if (k != 0 && n % k != 0)
            return 0;
    }
    return 1;
}
int main()
{
    init;
    int t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;

        while (check(n) == 0)
        {
            n++;
        }

        cout << n << '\n';
    }
}