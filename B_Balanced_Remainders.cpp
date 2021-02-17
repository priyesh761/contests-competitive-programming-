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
        int c[3] = {0, 0, 0};
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            c[0] += (ar[i] % 3 == 0);
            c[1] += (ar[i] % 3 == 1);
            c[2] += (ar[i] % 3 == 2);
        }
        int k = n / 3;
        int cnt = 0;
        for (int i = 0; i < 6; i++)
        {
            int ii = i % 3;
            //  cout << c[ii] << ' ';
            if (c[ii] > k)
            {
                int ex = c[ii] - k;
                c[ii] -= ex;
                cnt += ex;
                c[(ii + 1) % 3] += ex;
            }
        }

        cout << cnt << '\n';
    }
}