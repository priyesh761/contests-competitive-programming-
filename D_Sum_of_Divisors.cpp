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
    vi ar(n + 1);
    unsigned long long cnt = 0;
    for (int i = 1; i <= n; i++)
        for (int j = i; j <= n; j += i)
        {
            cnt += j;
        }
    cout << cnt;
}