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

        vi od;
        vi odd;
        vi ev;
        vi evv;

        for (int i = 0; i < 2 * n; i++)
        {
            int x;
            cin >> x;
            if (x % 2)
            {
                od.PB(x);
                odd.PB(i + 1);
            }
            else
            {
                ev.PB(x);
                evv.PB(i + 1);
            }
        }

        int os = od.size(), es = ev.size();
        // cout << os << '-' << es << endl;
        // sort(od.begin(),od.end());

        if (os % 2 == 0 && es % 2 == 0)
        {
            if (od > ev)
                os -= 2;
            else
                es -= 2;
        }
        else
        {
            os--;
            es--;
        }
        //  cout << os << '-' << es << endl;
        for (int i = 0; i + 1 < os; i += 2)
            cout << odd[i] << ' ' << odd[i + 1] << '\n';

        for (int i = 0; i + 1 < es; i += 2)
            cout << evv[i] << ' ' << evv[i + 1] << '\n';

        //  cout << endl;
    }
}