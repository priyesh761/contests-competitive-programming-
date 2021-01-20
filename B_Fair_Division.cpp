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

        int n;
        cin >> n;
        int ar[n];
        int sum = 0, tw = 0, o = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            sum += ar[i];
            o += (ar[i] == 1);
            tw += (ar[i] == 2);
        }
        if (sum % 2 == 0)
        {
            int num = sum / 2;
            bool st = 0;

            for (int i = 0; i <= tw && num >= 2 * i; i++)
                if (num - 2 * i <= o)
                {
                    st = 1;
                    break;
                }
            if (st)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}