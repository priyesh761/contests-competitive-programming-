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
        int r, c;
        map<int, int> row, col;

        for (int i = 0; i < 4 * n - 1; i++)
        {
            cin >> r >> c;
            // cout << r << c << endl;
            row[r]++;
            col[c]++;
        }

        for (auto i : row)
            if (i.second % 2 == 1)
            {
                r = i.first;
                break;
            }
        for (auto i : col)
            if (i.second % 2 == 1)
            {
                c = i.first;
                break;
            }

        cout << r << ' ' << c << '\n';
    }
}