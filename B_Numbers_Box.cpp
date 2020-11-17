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
        int n, m;
        cin >> n >> m;
        vector<vector<int>> mat(n, vector<int>(m));
        ll sum = 0;
        bool zr = 0;
        int neg = 0;
        int mn = INT_MAX;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
            {
                cin >> mat[i][j];
                sum += abs(mat[i][j]);
                if (mat[i][j] == 0)
                    zr = 1;
                if (mat[i][j] < 0)
                    neg++;
                mn = min(mn, abs(mat[i][j]));
            }

        if (zr)
            cout << sum << '\n';
        else
        {
            if (neg % 2)
            {
                cout << sum - 2 * mn << '\n';
            }
            else
                cout << sum << '\n';
        }
    }
}