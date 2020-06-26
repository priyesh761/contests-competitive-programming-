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

    ll n;

    cin >> n;

    int maxi = 1;

    while (n > pow(26, maxi))
    {
        n -= pow(26, maxi);
        maxi++;
    }
    string res = "";
    maxi--;
    // cout << maxi << endl;
    //;
    while (maxi >= 0)
    {
        ll tmp = pow(26, maxi);
        ll nn = (n - 1) / tmp;

        res += (char)(nn + 'a');
        //  cout << nn << ' ' << n << endl;

        n = (n) % tmp;
        if (n == 0)
            n += pow(26, maxi);
        //   cout << tmp << ' ' << n << endl;

        maxi--;
    }
    //res[res.length() - 1]--;
    cout << res << endl;
}