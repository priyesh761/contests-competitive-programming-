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

        int s1 = 0, s2 = 0;
        for (int i = 0; i < n; i++)
        {
            int j = 0;
            //s1 += ar[i];
            if (ar[i] == 1)
            {
                cout << 1 << ' ';
                continue;
            }
            while (j < 32 && (1LL << j) < ar[i])
                j++;
            //s2 += min(abs((1LL << j) - ar[i]), abs((1LL << (j - 1)) - ar[i]));
            if ((1LL << j) > 1e9)
                j--;
            if (abs((1LL << j) - ar[i]) <= abs((1LL << (j - 1)) - ar[i]))
                cout << (1LL << j) << ' ';
            else
                cout << (1LL << (j - 1)) << ' ';
        }
        cout << endl;
        //             << s1 << ' ' << 2 * s2 << endl;
    }
}