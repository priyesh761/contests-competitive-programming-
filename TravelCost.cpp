//Codevita 2020
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define mod 1000000007
#define init ios::sync_with_stdio(0), cin.tie(0);
typedef vector<int> vi;
typedef pair<ll, ll> pi;
#define MS(x, y) memset(x, y, sizeof(x))
#define F first
#define S second
#define PB push_back
#define MP make_pair

int main()
{

    ll n, m;
    cin >> n ;

    vector<ll> c(n);
    vector<ll> d(n, -1);
    for (int i = 0; i < n; i++)
        cin >> c[i];


    cin >> m;
    deque<pair<ll, ll>> dq;
    d[0] = c[0];
    dq.push_back({c[0], 0});

    for (int i = 1; i < n; i++) {

        while (!dq.empty() && dq.begin()->second < i - m - 1)
            dq.pop_front();

        if (!dq.empty() && c[i] != -1) {
            pi tmp = dq.front();
            d[i] = c[i] + d[tmp.second];
            while (!dq.empty() && dq.back().first >= d[i])
                dq.pop_back();
            dq.push_back({d[i], i});

        }

    }

    cout << d[n - 1] << '\n';



}