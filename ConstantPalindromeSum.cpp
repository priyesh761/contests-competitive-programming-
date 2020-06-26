#include<bits/stdc++.h>
using namespace std;

using ll = long long;

#define mod 1000000007
#define init ios::sync_with_stdio(0);cin.tie(0);

typedef vector<int> vi;
typedef pair<int, int> pi;
#define MS(x,y) memset(x,y,sizeof(x))
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
        int n, k;
        cin >> n >> k;

        int nm[2 * k + 2];
        int ar[n];
        MS(ar, 0);
        MS(nm, 0);

        for (int i = 0; i < n; ++i)
            cin >> ar[i];

        for (int i = 0; i < n / 2; ++i)
        {
            int mi = min(ar[i], ar[n - 1 - i]);
            int mx = max(ar[i], ar[n - 1 - i]);

            nm[2] += 2;
            nm[2 * k + 1] -= 2;
            nm[mi + 1] -= 1;
            nm[mi + mx] -= 1 ;
            nm[mi + mx + 1] += 1;
            nm[mx + k + 1] += 1;

        }

        int ans = INT_MAX;;
        for (int i = 2; i <= 2 * k ; ++i)
        {
            nm[i] += nm[i - 1];
            ans = min(ans, nm[i]);
        }
        cout << ans << endl;

    }
}