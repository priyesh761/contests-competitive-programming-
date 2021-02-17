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
        int n, k;
        cin >> n >> k;

        vector<int> ar(n);
        for (int i = 0; i < n; i++)
            cin >> ar[i];

        int st = 0;
        while (k > 0)
        {
            st = 0;
            for (int i = 0; i < n; i++)
            {
                if (i != n - 1 && ar[i] < ar[i + 1])
                {
                    ar[st]++;
                    break;
                }
                st++;
            }
            if (st == n)
                break;
            k--;
        }

        if (st == n)
            cout << -1;
        else
            cout << st + 1;
        cout << '\n';
    }
}