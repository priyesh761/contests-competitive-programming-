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
        int n, k;
        cin >> n >> k;

        if (n < k)
        {
            cout << abs(k - n) << '\n';
        }
        else if ((n % 2 == 0) ^ (k % 2 == 0))
            cout << 1 << '\n';
        else
        {
            cout << 0 << '\n';
        }
    }
}