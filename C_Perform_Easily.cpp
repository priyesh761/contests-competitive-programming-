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
    int ar[6];

    for (int i = 0; i < 6; i++)
        cin >> ar[i];

    int n;
    cin >> n;

    int b[n];
    for (int i = 0; i < n; i++)
        cin >> b[i];

    vector<pair<int, int>> v;

    for (int i = 0; i < 6; i++)
        for (int j = 0; j < n; j++)
            v.push_back({abs(ar[i] - b[j]), j});

    sort(v.begin(), v.end());

    map<int, int> mp;
    int mi = 0;
    int diff = INT_MAX;
    for (int i = 0; i < v.size(); i++)
    {
        mp[v[i].S]++;

        if (mp.size() == n)
        {

            diff = min(diff, v[i].F - v[mi].F);
            while (mi <= i && mp[v[mi].S] > 1)
            {
                mp[v[mi].S]--;
                mi++;
                diff = min(diff, v[i].F - v[mi].F);
            }
        }
    }

    cout << diff;
}