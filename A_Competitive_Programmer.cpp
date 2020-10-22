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
        string s;
        cin >> s;

        bool even;
        even = false;

        int sumdigits = 0, zerocnt = 0;

        for (auto i : s)
        {
            if (i == '0')
                zerocnt++;
            if (i != '0' && (i - '0') % 2 == 0)
                even = 1;

            sumdigits += (i - '0');
        }
        if (sumdigits % 3 == 0 && zerocnt && (even || zerocnt > 1))
            cout << "red\n";
        else
            cout << "cyan\n";
    }
}