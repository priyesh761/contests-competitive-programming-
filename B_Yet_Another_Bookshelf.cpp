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

        int ar[n];

        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }

        int i = 0;
        while (i < n && ar[i] == 0)
            i++;
        int cnt = 0;
        while (i < n)
        {
            int j = i;
            while (i < n && ar[i] == 0)
                i++;
            if (i < n)
                cnt += i - j;
            if (ar[i] == 1)
                i++;
        }
        cout << cnt << '\n';
    }
}