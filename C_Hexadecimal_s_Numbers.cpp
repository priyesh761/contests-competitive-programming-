#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define mod 1000000007
#define init ios::sync_with_stdio(0), cin.tie(0);
typedef pair<int, int> pi;
#define F first
#define S second

int dig(int num)
{
    int conv = 0;
    ll pow = 1;
    while (num > 0)
    {
        ll bit = (num & 1);
        conv += bit * pow;
        pow *= 10;
        num >>= 1;
    }
    return conv;
}
int main()
{
    init;
    int n;
    cin >> n;
    int ans = 1;
    for (int i = 1023; i >= 1; i--)
        if (dig(i) <= n)
        {
            ans = i;
            break;
        }

    cout << ans;
}