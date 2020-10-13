//Kickstart 2020
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

ll n, x;
bool cmp(pair<ll, int> a, pair<ll, int> b)
{
    if (((a.first - 1) / x) == ((b.first - 1) / x))
        return (a.second) <= (b.second);
    return ((a.first - 1) / x) < ((b.first - 1) / x);
}

int main()
{
    init;
    int t;
    cin >> t;
    int cnt = 0;
    while (t--)
    {
        cin >> n >> x;

        vector<pair<ll, int>> ar(n);
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i].first;
            ar[i].second = i + 1;
        }

        sort(ar.begin(), ar.end(), cmp);

        cout << "Case #" << cnt + 1 << ": ";

        for (int i = 0; i < n; i++)
            cout << ar[i].second << ' ';
        cnt++;

        cout << '\n';
    }
}