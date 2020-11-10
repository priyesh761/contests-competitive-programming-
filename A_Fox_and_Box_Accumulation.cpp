#include <bits/stdc++.h>
using namespace std;

using ll = long long;
template <typename T>
using vc = vector<T>;

#define mod 1000000007
#define init                 \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define For(i, a, b) for (int i = a; i < b; i++)
#define rFor(i, a, b) for (int i = a; i > b; i--)

typedef vector<int> vi;
typedef pair<int, int> pi;
#define F first
#define S second
#define pb push_back
#define mp make_pair

int main()
{
    init;

    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a, a + n);
    map<int, int, greater<int>> mpa;
    int piles = 0;
    For(i, 0, n)
    {
        auto it = mpa.lower_bound(a[i]);
        if (it == mpa.end())
        {
            mpa[1]++;
            piles++;
        }
        else
        {
            mpa[it->F + 1]++;
            if (mpa[it->F] > 1)
                (mpa[it->F]--);
            else
                (mpa.erase(it));
        }
    }

    cout << piles;
}