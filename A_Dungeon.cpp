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
        int a, b, c;

        cin >> a >> b >> c;
        ll sum = a + b + c;
        if (sum % 9 == 0 && min({a, b, c}) >= sum / 9)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}