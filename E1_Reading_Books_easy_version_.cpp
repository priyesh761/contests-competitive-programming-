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

    int n, k;
    cin >> n >> k;

    vector<int> a;
    vector<int> b;
    vector<int> ab;

    for (int i = 0; i < n; i++)
    {
        int tt, aa, bb;
        cin >> tt >> aa >> bb;

        if (aa && bb)
            ab.PB(tt);
        else
        {
            if (aa)
                a.PB(tt);
            else if (bb)
                b.PB(tt);
        }
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    sort(ab.begin(), ab.end());

    if (ab.size() + a.size() < k || ab.size() + b.size() < k)
        cout << -1 << '\n';
    else
    {
        int abo = k, bbo = k, sum = 0;
        int i, j, z;
        i = j = z = 0;
        while (abo > 0 && bbo > 0)
        {
            int mini = INT_MAX;
            int st = 2;
            if (i < ab.size() && ab[i] < mini)
            {
                mini = ab[i];
                st = 1;
            }
            if (j < a.size() && z < b.size() && a[j] + b[z] < mini)
            {
                mini = a[j] + b[z];
                st = 0;
            }
            sum += mini;
            if (st)
                i++;
            else
            {
                j++, z++;
            }
            abo--;
            bbo--;
        }

        while (abo > 0)
        {
            int mini = INT_MAX;
            int st = 2;
            if (i < ab.size() && ab[i] < mini)
            {
                mini = ab[i];
                st = 1;
            }
            if (j < a.size() && a[j] < mini)
            {
                mini = a[j];
                st = 0;
            }
            sum += mini;
            if (st)
                i++;
            else
            {
                j++;
            }
            abo--;
        }
        while (bbo > 0)
        {
            int mini = INT_MAX;
            int st = 2;
            if (i < ab.size() && ab[i] < mini)
            {
                mini = ab[i];
                st = 1;
            }
            if (z < b.size() && b[z] < mini)
            {
                mini = b[z];
                st = 0;
            }
            sum += mini;
            if (st)
                i++;
            else
            {
                j++, z++;
            }
            bbo--;
        }
        cout << sum << '\n';
    }
}