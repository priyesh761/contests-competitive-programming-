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
    string s, t;
    cin >> s >> t;

    int cnt = 0;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != t[i])
            cnt++;
    }
    cout << cnt;
}