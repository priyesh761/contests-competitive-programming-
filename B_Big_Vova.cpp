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
        for (int i = 0; i < n; i++)
            cin >> ar[i];

        int ind = max_element(ar.begin(), ar.end()) - ar.begin();
        swap(ar[0], ar[ind]);
        int gcd = ar[0];
        for (int i = 1; i < n; i++)
        {
            int mx = 0;
            for (int j = i; j < n; j++)
            {
                if (__gcd(gcd, ar[j]) > mx)
                {
                    mx = __gcd(gcd, ar[j]);
                    swap(ar[i], ar[j]);
                }
            }
            gcd = mx;
        }

        for (int i = 0; i < n; i++)
            cout << ar[i] << ' ';
        cout << '\n';
    }
}