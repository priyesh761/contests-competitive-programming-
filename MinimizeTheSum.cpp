//Codevita 2020
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

    int n, k;

    cin >> n >> k;

    ll sum = 0;

    priority_queue<int> pq;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        pq.push(x);
        sum += x;
    }

    while (!pq.empty() && k--) {
        int tmp = pq.top();
        pq.pop();
        sum -= (tmp - tmp / 2);
        pq.push(tmp / 2);
    }
    cout << sum;
}