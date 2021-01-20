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
        int n, d;
        cin >> n >> d;

        int ar[n];
        for (int i = 0; i < n; i++)
            cin >> ar[i];

        sort(ar, ar + n);

        if (ar[n - 1] <= d || ar[0] + ar[1] <= d)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}