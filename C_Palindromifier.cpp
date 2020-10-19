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

    string s;

    cin >> s;

    int n = s.length();
    cout << 3 << '\n';
    cout << "L " << n - 1 << '\n';
    int tmp = n - 2;
    n += n - 2;
    cout << "R " << tmp + 1 << '\n';

    n += (tmp + 1);
    cout << "R " << n - tmp << '\n';
}