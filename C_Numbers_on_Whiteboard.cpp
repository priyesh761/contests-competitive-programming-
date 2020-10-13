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

        if (n == 2)
        {
            cout << 2 << '\n';
            cout << 1 << ' ' << 2 << '\n';
            continue;
        }

        cout << 2 << '\n';
        cout << n << ' ' << n - 2 << '\n';
        cout << n - 1 << ' ' << n - 1 << '\n';
        n = n - 1;
        while (n >= 3)
        {
            cout << n << ' ' << n - 2 << '\n';
            n--;
        }
    }
}