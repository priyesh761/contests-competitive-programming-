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
    int n;
    cin >> n;

    vector<vector<int>> mat(n, vector<int>(n));

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> mat[i][j];

    vector<vector<ll>> lft(n, vector<ll>(n));
    vector<vector<ll>> rgt(n, vector<ll>(n));

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            lft[i][j] += mat[i][j];
            rgt[i][j] += mat[i][j];

            if (i - 1 >= 0)
            {
                if (j - 1 >= 0)
                    rgt[i][j] += rgt[i - 1][j - 1];
                if (j + 1 < n)
                    lft[i][j] += lft[i - 1][j + 1];
            }
        }
    ll mx1 = 0, mx2 = 0;
    int x1 = 1, x2 = 1, y1 = 1, y2 = 2;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            int dx1, dx2;
            dx1 = min(n - 1 - i, n - 1 - j);
            dx2 = min(n - 1 - i, j);
            if ((i + j) % 2)
            {
                if (mx1 < rgt[i + dx1][j + dx1] + lft[i + dx2][j - dx2] - mat[i][j])
                {
                    mx1 = rgt[i + dx1][j + dx1] + lft[i + dx2][j - dx2] - mat[i][j];
                    x1 = i + 1, y1 = j + 1;
                }
            }
            else
            {
                if (mx2 < rgt[i + dx1][j + dx1] + lft[i + dx2][j - dx2] - mat[i][j])
                {
                    mx2 = rgt[i + dx1][j + dx1] + lft[i + dx2][j - dx2] - mat[i][j];
                    x2 = i + 1, y2 = j + 1;
                }
            }
        }

    cout << mx1 + mx2 << '\n';
    cout << x1 << ' ' << y1 << ' ' << x2 << ' ' << y2;
}