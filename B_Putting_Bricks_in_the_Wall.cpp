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
        char ar[n][n];

        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                cin >> ar[i][j];

        vector<pair<int, int>> res;

        if (ar[0][1] == ar[1][0])
        {

            if (ar[n - 1][n - 2] == ar[0][1])
                res.push_back({n, n - 1});

            if (ar[n - 2][n - 1] == ar[0][1])
                res.push_back({n - 1, n});
        }
        else
        {
            if (ar[n - 1][n - 2] == ar[n - 2][n - 1])
            {

                if (ar[0][1] == ar[n - 1][n - 2])
                    res.push_back({1, 2});

                if (ar[n - 1][n - 2] == ar[1][0])
                    res.push_back({2, 1});
            }
            else
            {
                if (ar[0][1] == '1')
                    res.push_back({1, 2});
                if (ar[1][0] == '1')
                    res.push_back({2, 1});
                if (ar[n - 1][n - 2] == '0')
                    res.push_back({n, n - 1});
                if (ar[n - 2][n - 1] == '0')
                    res.push_back({n - 1, n});
            }
        }

        cout << res.size() << '\n';
        for (auto i : res)
            cout << i.F << ' ' << i.S << '\n';
    }
}