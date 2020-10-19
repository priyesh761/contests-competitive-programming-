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

ll func(int num, int ct)
{
    ll sm = 0;
    ll part = num / ct;
    ll re = num % ct;
    sm += ((ct - re) * part * part);
    sm += (re * (part + 1) * (part + 1));

    return sm;
}

int main()
{
    init;

    int n, k;
    cin >> n >> k;

    vector<ll> ar(n);

    ll cost = 0;
    priority_queue<tuple<ll, ll, ll>> pq;

    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
        cost += (ar[i] * ar[i]);
        pq.push({func(ar[i], 1) - func(ar[i], 2), 2, i});
    }

    while (n++ < k)
    {
        ll diff, part, index;
        tie(diff, part, index) = pq.top();
        pq.pop();

        cost -= diff;
        pq.push({func(ar[index], part) - func(ar[index], part + 1), part + 1, index});
    }

    cout << cost;
}