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
        int q, d;
        cin >> q >> d;

        int ar[q];

        for (int i = 0; i < q; i++)
        {
            cin >> ar[i];

            if (ar[i] >= d * 10)
                cout << "YES\n";
            else
            {
                bool st = 1;
                for (int j = 1; j * d <= ar[i]; j++)
                {
                    if ((j * d) % 10 == ar[i] % 10)
                    {
                        cout << "YES\n";
                        st = 0;
                        break;
                    }
                }
                if (st)
                    cout << "NO\n";
            }
        }
    }
}