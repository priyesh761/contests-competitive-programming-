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
        ll n;
        cin >> n;

        while (n % 2 == 0)
            n /= 2;

        if (n != 1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}