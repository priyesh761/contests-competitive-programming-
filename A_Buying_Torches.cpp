#include <bits/stdc++.h>
using namespace std;

using ll = unsigned long long;
#define mod 1000000007
#define init ios::sync_with_stdio(0), cin.tie(0);
typedef vector<int> vi;
typedef pair<int, int> pi;
#define MS(x, y) memset(x, y, sizeof(x))
#define F first
#define S second
#define PB push_back
#define MP make_pair

bool check(ll req, ll m1, ll m2)
{
    return m1 * m2 >= req;
}

ll bs(ll req, ll mul)
{

    ll low = 0;
    ll high = ceil(double(req) / double(mul)) + 1000;
    ll ans = 0;

    while (low <= high)
    {

        ll mid = low + (high - low) / 2;
        if (check(req, mid, mul))
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
}
int main()
{
    init;
    int t;
    cin >> t;

    while (t--)
    {
        ll x, y, k;
        cin >> x >> y >> k;

        ll st = 1;
        ll req = k * (1 + y) - 1;
        ll req1 = bs(req, x - 1);
        // cout << fixed << setprecision(10) << (double)req / (double)(x - 1) << endl;
        cout << req1 + k << endl;
    }
}