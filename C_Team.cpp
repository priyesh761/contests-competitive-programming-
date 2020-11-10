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
    int z, o;

    cin >> z >> o;

    if (z > o + 1 || o > 2 * z + 2)
        cout << -1;
    else
    {
        string res;
        if (z > o)
        {
            res += '0';
            z--;
        }
        while (o > 0 || z > 0)
        {
            if (o - z > 1)
            {
                if (o)
                {
                    res += "11";
                    o -= 2;
                }
                if (z)
                {
                    res += '0';
                    z -= 1;
                }
            }
            else
            {
                if (o)
                {
                    res += '1';
                    o--;
                }

                if (z)
                {
                    res += '0';
                    z--;
                }
            }
        }
        cout << res << '\n';
    }
}