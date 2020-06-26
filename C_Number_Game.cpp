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

int Msize = 100000;
vi prime;
void P()
{
    vector<bool> vis(Msize);
    prime.PB(2);
    // cout << Msize << endl;
    for (ll i = 3; i <= Msize; i += 2)
        if (vis[i] == 0)
        {
            prime.PB(i);
            for (ll j = i * i; j <= Msize; j += i)
                vis[j] = 1;
        }
}

int main()
{
    init;
    P();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        if (n % 2)
        {
            if (n == 1)
                cout << "FastestFinger\n";
            else
                cout << "Ashishgup\n";
        }
        else
        {
            int evp = 0, odp = 0;
            while (n % 2 == 0)
            {
                n /= 2;
                evp++;
            }
            int ind = 1;
            int N = n;
            while (prime[ind] * prime[ind] <= N)
            {
                while (n % prime[ind] == 0)
                {
                    n /= prime[ind];
                    odp++;
                }
                ind++;
            }
            if (n > 1)
            {
                odp++;
            }
            if ((odp == 0 && evp != 1) || (odp == 1 && evp == 1))
                cout << "FastestFinger\n";
            else
            {
                cout << "Ashishgup\n";
            }
        }
    }
}