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

    vector<pi> v(n);

    priority_queue<int, vector<int>, greater<int>> pq;
    for (int i = 0; i < n; i++)
        cin >> v[i].F >> v[i].S;

    sort(v.begin(), v.end());

    int cnt = 0, mx = 0, yr = 0;
    for (int i = 0; i < n; i++)
    {
        while (!pq.empty() && pq.top() <= v[i].F)
        {
            pq.pop();
            cnt--;
        }
        pq.push(v[i].S);
        cnt++;
        if (mx < cnt)
        {
            mx = cnt;
            yr = v[i].F;
        }
    }
    cout << yr << ' ' << mx;
}