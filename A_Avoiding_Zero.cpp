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
        int nn;
        cin >> nn;

        vector<int> ar(nn);

        ll n = 0, p = 0;
        for (int i = 0; i < nn; i++)
        {
            cin >> ar[i];
            if (ar[i] > 0)
                p += ar[i];
            else
                n += ar[i];
        }
        n = abs(n);
        if (p == n)
            cout << "NO\n";
        else
        {
            if (n > p)
            {
                sort(ar.begin(), ar.end());
            }
            else
            {
                sort(ar.begin(), ar.end(), greater<int>());
            }
            cout << "YES\n";
            for (int i = 0; i < nn; i++)
                cout << ar[i] << ' ';
            cout << '\n';
        }
    }
}