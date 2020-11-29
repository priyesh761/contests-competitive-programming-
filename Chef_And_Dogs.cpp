#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define mod 1000000007
#define init ios::sync_with_stdio(0), cin.tie(0);
typedef pair<int, int> pi;
#define F first
#define S second

ll func(ll n)
{
    return (n * (n - 1)) / 2;
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
        ll medges = 0;
        ll i = 1;
        while (i < n)
        {

            ll edges = min(n - i + 1, func(i));
            if (edges < medges)
                break;
            medges = max(edges, medges);
            i++;
        }
        cout << medges << '\n';
    }
}