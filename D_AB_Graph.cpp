#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define mod 1000000007
#define init ios::sync_with_stdio(0), cin.tie(0);
typedef pair<int, int> pi;
#define F first
#define S second

int check(vector<vector<char>> &mat, int ind, int par, char col)
{
    for (int i = 0; i < mat[ind].size(); i++)
        if (i != par && mat[ind][i] == col)
            return i;
    return -1;
}
int main()
{
    init;
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        vector<vector<char>> mat(n, vector<char>(n));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                cin >> mat[i][j];

        int a = -1, b = -1, c = -1;
        for (int i = 0; i < n; i++)
            for (int j = i + 1; j < n; j++)
            {
                // cout << mat[i][j] << mat[j][i] << '-';
                if (mat[i][j] == mat[j][i])
                {
                    a = i;
                    b = j;
                    i = n + 1;
                    j = n + 1;
                    break;
                }
            }

        if (a != -1 && b != -1)
        {
            cout << "YES\n";
            for (int i = 0; i <= m; i++)
                if (i % 2 == 0)
                    cout << a + 1 << ' ';
                else
                    cout << b + 1 << ' ';
            cout << '\n';
            continue;
        }
        if (m % 2)
        {
            a = 0, b = 1;
            cout << "YES\n";
            for (int i = 0; i <= m; i++)
                if (i % 2 == 0)
                    cout << a + 1 << ' ';
                else
                    cout << b + 1 << ' ';
            cout << '\n';
            continue;
        }
        vector<bool> col(n);

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < mat[i].size(); j++)
            {
                int st = check(mat, j, i, mat[i][j]);
                if (st != -1)
                {
                    a = i;
                    b = j;
                    c = st;
                    i = n;
                    break;
                }
            }
        }

        if (a != -1 && b != -1 && c != -1)
        {
            cout << "YES\n";
            vector<int> tmp = {a + 1, b + 1, c + 1};
            int k = ((m / 2) % 2) ? 0 : 1, d = 1;
            for (int i = 0; i <= m; i++)
            {
                cout << tmp[k] << ' ';
                if (k == 2)
                    d = -1;
                if (k == 0)
                    d = 1;
                k += d;
            }
            cout << '\n';
        }
        else
            cout << "NO\n";
    }
}