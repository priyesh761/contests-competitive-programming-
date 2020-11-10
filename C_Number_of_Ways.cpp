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
    int n;

    cin >> n;

    int ar[n];
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
        sum += ar[i];
    }

    map<int, int> mp;

    ll pref = 0, ways = 0;
    for (int i = 0; i < n - 1; i++)
    {
        pref += ar[i];
        if (mp.count(sum - pref) && 2 * (sum - pref) == pref)
            ways += mp[sum - pref];
        mp[pref]++;
    }

    cout << ways;
}