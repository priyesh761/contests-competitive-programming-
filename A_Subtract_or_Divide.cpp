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
        if (n == 1)
            cout << 0;
        else if (n == 2)
            cout << 1;
        else if (n == 3)
            cout << 2;
        else if (n % 2)
            cout << 3;
        else
            cout << 2;
        cout << '\n';
    }
}