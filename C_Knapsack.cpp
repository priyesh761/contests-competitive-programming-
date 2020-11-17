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
        ll n, w;
        cin >> n >> w;

        vector<pair<ll, int>> ar(n);
        ll lft = (w + 1) / 2;
        int ind = -1;
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i].F;
            ar[i].S = i;
            if (ar[i].F >= lft && ar[i].F <= w)
                ind = i + 1;
        }
        if (ind != -1)
        {
            cout << 1 << '\n'
                 << ind << '\n';
            continue;
        }
        sort(ar.begin(), ar.end());
        ll sum = 0;
        int i = 0, j = 0;
        while (i <= j && i < ar.size() && j < ar.size())
        {

            if (sum < lft)
            {
                sum += ar[j].F;
                j++;
            }
            else if (sum > w)
            {
                sum -= ar[i].F;
                i++;
            }
            else
                break;
        }
        if (sum >= lft && sum <= w)
        {
            cout << j - i << '\n';
            for (i; i < j; i++)
                cout << ar[i].S + 1 << ' ';
            cout << '\n';
        }
        else
            cout << -1 << '\n';
    }
}