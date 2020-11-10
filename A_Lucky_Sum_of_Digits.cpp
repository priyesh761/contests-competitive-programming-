#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define mod 1000000007
#define init ios::sync_with_stdio(0), cin.tie(0);
typedef pair<int, int> pi;
#define F first
#define S second

int main()
{
    init;
    int n;
    cin >> n;

    int l1 = n / 4;
    int l2 = n / 7;
    int v1 = 1e7, v2 = 1e7;
    for (int i = 0; i <= l2; i++)
    {
        if ((n - 7 * i) % 4 == 0)
        {
            int j = (n - 7 * i) / 4;
            if (v1 + v2 > i + j || (v1 + v2 == i + j && v2 < j))
                v1 = i, v2 = j;
        }
    }

    if (v1 > 1e6)
        cout << -1;
    else
    {
        for (int i = 0; i < v2; i++)
            cout << 4;
        for (int i = 0; i < v1; i++)
            cout << 7;
    }
}