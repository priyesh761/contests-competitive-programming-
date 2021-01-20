#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define mod 1000000007
#define init ios::sync_with_stdio(0), cin.tie(0);
typedef pair<int, int> pi;
#define F first
#define S second

void func(vector<string> &mat, vector<ll> &area, bool st = 0)
{
    int n = mat.size();
    for (int dig = 0; dig < 10; dig++)
    {
        vector<ll> bs(n);
        vector<bool> hg(n);
        vector<ll> bse(n);
        for (int i = 0; i < n; i++)
        {
            int mi = n + 1, mx = -1;
            for (int j = 0; j < n; j++)
                if (((st) ? mat[i][j] : mat[j][i]) == '0' + dig)
                {
                    mi = min(mi, j);
                    mx = max(mx, j);
                    hg[i] = 1;
                }
            if (hg[i])
            {
                bs[i] = mx - mi;
                bse[i] = max({n - 1 - mi, mi, n - 1 - mx, mx});
            }
        }
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                if (hg[j])
                    area[dig] = max(area[dig], max(bs[i], bse[i]) * abs(j - i));
                else
                    area[dig] = max(area[dig], bs[i] * abs(j - i));
    }
}
int main()
{
    init;
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<string> mat(n);
        for (int i = 0; i < n; i++)
            cin >> mat[i];

        vector<ll> area(10);
        func(mat, area, 0);
        func(mat, area, 1);

        for (int i = 0; i < 10; i++)
            cout << area[i] << ' ';
        cout << '\n';
    }
}