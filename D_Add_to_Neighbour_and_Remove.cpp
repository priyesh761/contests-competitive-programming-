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
        int n;
        cin >> n;

        int ar[n];

        for (int i = 0; i < n; i++)
            cin >> ar[i];

        int sum = 0;
        bool st = 0;
        int mi = n - 1;
        for (int i = 0; i < n; i++)
        {
            st = 0;
            sum += ar[i];
            int ssum = 0;
            int cnt = 1;
            for (int j = i + 1; j < n; j++)
            {
                ssum += ar[j];
                if (ssum == sum)
                {
                    cnt++;
                    ssum = 0;
                }
                else if (ssum > sum)
                {
                    ssum = -1;
                    break;
                }
            }
            if (ssum == 0)
            {
                mi = min(mi, n - cnt);
            }
        }
        cout << mi << '\n';
    }
}