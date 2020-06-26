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

    cout << n * 3 + 4 << '\n';

    cout << "0 0\n0 1\n";

    for (int i = 1; i <= n; i++)
        for (int j = i - 1; j <= i + 1; j++)
            cout << i << ' ' << j << '\n';

    cout << n + 1 << ' ' << n << '\n';
    cout << n + 1 << ' ' << n + 1;
}