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
        int x1, x2, y1, y2;

        cin >> x1 >> y1 >> x2 >> y2;

        if (x2 - x1 == 0 || y2 - y1 == 0)
        {
            cout << abs(x2 - x1) + abs(y2 - y1) << '\n';
        }
        else
        {
            cout << abs(x2 - x1) + abs(y2 - y1) + 2 << '\n';
        }
    }
}