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
    int t;
    cin >> t;

    while (t--)
    {
        int n;

        cin >> n;

        bool st = 0;
        int num1, num2, num3;
        for (int i = 0; 7 * i <= n; i++)
            for (int j = 0; 7 * i + 5 * j <= n; j++)
                if ((n - 7 * i - 5 * j) % 3 == 0)
                {
                    num1 = (n - 7 * i - 5 * j) / 3;
                    num2 = j;
                    num3 = i;
                    st = 1;
                    break;
                }

        if (st)
            cout << num1 << ' ' << num2 << ' ' << num3 << '\n';
        else
            cout << -1 << '\n';
    }
}