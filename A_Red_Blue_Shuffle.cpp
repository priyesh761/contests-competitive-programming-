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

        string a, b;

        cin >> a >> b;
        int cnr = 0, cnb = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] > b[i])
                cnr++;
            if (a[i] < b[i])
                cnb++;
        }

        if (cnr > cnb)
            cout << "RED\n";
        else if (cnb > cnr)
            cout << "BLUE\n";
        else
            cout << "EQUAL\n";
    }
}