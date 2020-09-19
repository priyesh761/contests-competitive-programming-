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

        vector<int> arr(110);

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;

            arr[x]++;
        }

        int ans = 101;
        for (int i = 0; i <= 100; i++)
        {
            if (arr[i] == 0)
            {
                ans = i;
                break;
            }
        }

        int sum = ans;
        for (int i = 0; i < ans; i++)
        {
            if (arr[i] == 1)
            {
                ans = i;
                break;
            }
        }

        sum += ans;

        cout << sum << endl;
    }
}