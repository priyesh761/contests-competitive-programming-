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
    int n, m;
    cin >> n >> m;

    vector<vector<char>> v(n, vector<char>(m));

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> v[i][j];
    bool st = 1;
    int mx = 0;
    set<int> se;
    for (int i = 0; i < n; i++)
    {
        int s = -1, g = -1;
        for (int j = 0; j < m; j++)
        {
            if (v[i][j] == 'G')
                g = j;
            else if (v[i][j] == 'S')
                s = j;
        }
        if (s < g)
            st = 0;
        else
            se.insert(s - g);
    }
    if (st)
        cout << se.size();
    else
        cout << -1;
}