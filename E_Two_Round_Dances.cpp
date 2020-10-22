#include <bits/stdc++.h>
using namespace std;

using ll = unsigned long long;
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

    ll fc = 1;

    for (int i = 2; i <= n; i++)
        fc *= i;

    fc /= (n * (n / 2));

    cout << fc;
}