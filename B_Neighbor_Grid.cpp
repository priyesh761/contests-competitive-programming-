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
        int n, m;
        cin >> n >> m;

        int a[n][m];
        int x;
        bool st = 1;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
            {
                cin >> x;
                if ((i == 0 && j == 0) || (i == 0 && j == m - 1) || (i == n - 1 && j == 0) || (i == n - 1 && j == m - 1))
                    a[i][j] = 2;
                else
                {
                    if (i == 0 || j == 0 || i == n - 1 || j == m - 1)
                        a[i][j] = 3;
                    else
                        a[i][j] = 4;
                }
                if (x > a[i][j])
                    st = 0;
            }

        if (st)
        {
            cout << "YES\n";
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < m; j++)
                    cout << a[i][j] << ' ';
                cout << '\n';
            }
        }
        else
            cout << "NO\n";
    }
}