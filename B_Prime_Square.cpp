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

        int m = 997 - (n - 1);
        vector<vector<int>> v(n, vector<int>(n));
        if (n == 3)
        {
            cout << "995 1 1\n1 0 1\n1 1 995\n";
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    if ((i == 0 && j == 0) || (i == n - 1 && j == n - 1))
                        v[i][j] = ((m % 2) ? m + 1 : m);
                    else if (i == 0 || j == 0 || i == n - 1 || j == n - 1)
                        v[i][j] = 1;
                    else
                        v[i][j] = 0;
                }
            }

            if (m % 2 == 1)
            {
                v[0][1] = 0;
                v[1][0] = 0;
                v[1][1] = 1;
                v[n - 2][n - 2] = 1;
                v[n - 1][n - 2] = 0;
                v[n - 2][n - 1] = 0;
            }
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                    cout << v[i][j] << ' ';
                cout << '\n';
            }
        }
    }
}