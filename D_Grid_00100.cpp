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
        int row[n], col[n];
        MS(row, 0);
        MS(col, 0);

        int mat[n][n];
        MS(mat, 0);
        for (int i = 0; i < n; i++)
        {
            if (k <= 0)
                break;
            for (int j = 0; j < n - i; j++)
            {
                if (k <= 0)
                    break;
                if (j + i < n)
                {
                    mat[j][j + i] = 1;
                    row[j]++;
                    col[j + i]++;
                    k--;
                }
            }
            for (int j = 0; j < n; j++)
            {
                if (k <= 0)
                    break;
                if (n - i - 1 + j < n)
                {
                    mat[n - i - 1 + j][j] = 1;
                    row[n - i - 1 + j]++;
                    col[j]++;
                    k--;
                }
            }
        }

        ll ans1 = *max_element(row, row + n);
        ll ans2 = *min_element(row, row + n);
        ll ans3 = *max_element(col, col + n);
        ll ans4 = *min_element(col, col + n);

        cout << (ans1 - ans2) * (ans1 - ans2) + (ans3 - ans4) * (ans3 - ans4) << endl;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
                cout << mat[i][j];
            cout << '\n';
        }
    }
}