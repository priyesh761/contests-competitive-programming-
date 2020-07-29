// Facebook hackercup qualification round
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

    for (int tq = 1; tq <= t; tq++)
    {
        int n;
        cin >> n;

        bool i[n], o[n];

        char x;
        for (int ii = 0; ii < n; ii++)
        {
            cin >> x;
            i[ii] = (x == 'Y');
        }

        for (int ii = 0; ii < n; ii++)
        {
            cin >> x;
            o[ii] = (x == 'Y');
        }

        char res[n];
        cout << "Case #" << tq << ":\n";
        for (int ii = 0; ii < n; ii++)
        {
            int k = ii - 1;
            res[ii] = 'Y';
            while (k >= 0 && i[k] && o[k + 1]) {
                res[k] = 'Y';
                k--;
            }
            while (k >= 0) {
                res[k] = 'N';
                k--;
            }
            k = ii + 1;
            while (k < n && i[k] && o[k - 1]) {
                res[k] = 'Y';
                k++;
            }
            while (k < n) {
                res[k] = 'N';
                k++;
            }

            for (int iq = 0; iq < n; iq++)
                cout << res[iq];
            cout << '\n';
        }
    }

}