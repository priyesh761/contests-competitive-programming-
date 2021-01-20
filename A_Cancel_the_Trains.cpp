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
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        vector<int> ar(110);

        int cnt = 0;
        int num = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> num;
            ar[num]++;
        }

        for (int i = 0; i < m; i++)
        {
            cin >> num;
            ar[num]++;
            cnt += (ar[num] >= 2);
        }
        cout << cnt << '\n';
    }
}