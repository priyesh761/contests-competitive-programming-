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
        ll n;
        cin >> n;

        ll s1 = 0, s2 = 0;
        bool t = 1;
        while (n > 0)
        {
            if (n % 4 == 0 && n / 4 > 2)
            {
                s1++;
                s2++;
                n -= 2;
            }
            else if (n % 2 == 0)
            {
                if (t)
                    s1 += n / 2;
                else
                    s2 += n / 2;
                t = !t;
                n /= 2;
            }
            else
            {
                if (t)
                    s1++;
                else
                    s2++;
                t = !t;
                n--;
            }
        }

        cout << s1 << '\n';
    }
}