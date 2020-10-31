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

    int n, x, pos;
    cin >> n >> x >> pos;

    int sm = x - 1;
    int lg = n - x;

    int low = 0, high = n;
    ll sol = 1;

    while (low < high)
    {
        int mid = (low + high) / 2;

        if (mid <= pos)
        {
            low = mid + 1;
            if (mid != pos)
            {
                sol *= sm;
                sol %= mod;
                if (sm != 0)
                    sm--;
            }
        }
        else
        {
            high = mid;
            sol *= lg;
            sol %= mod;
            if (lg != 0)
                lg--;
        }
    }

    int tot = sm + lg;
    while (tot > 0)
    {
        sol *= tot;
        sol %= mod;
        tot--;
    }

    cout << sol;
}