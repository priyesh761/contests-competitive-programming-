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

        vector<vector<int>> a1(n, vector<int>(m));

        vector<pi> nu(m * n + 1);

        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
            {
                cin >> a1[i][j];
                nu[a1[i][j]].S = j;
            }

        for (int j = 0; j < m; j++)
            for (int i = 0; i < n; i++)
            {
                cin >> a1[i][j];
                nu[a1[i][j]].F = i;
            }
        for (int i = 1; i < nu.size(); i++)
            a1[nu[i].F][nu[i].S] = i;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
                cout << a1[i][j] << ' ';
            cout << '\n';
        }
    }
}