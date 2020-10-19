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
        vector<int> ar(n);
        vector<short> un(n);

        for (int i = 0; i < n; i++)
            cin >> ar[i];

        vector<int> rep;
        for (int i = 0; i < n; i++)
        {
            cin >> un[i];
            if (un[i] == 0)
                rep.push_back(ar[i]);
        }

        sort(rep.begin(), rep.end(), greater<int>());

        int j = 0;

        for (int i = 0; i < n; i++)
            if (un[i] == 0)
                ar[i] = rep[j++];

        for (int i = 0; i < n; i++)
            cout << ar[i] << ' ';
        cout << '\n';
    }
}