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
    int n;
    cin >> n;

    string s;
    cin >> s;

    int cnt = 0, ocnt = 0, pcnt = 0;
    bool p = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '_' || s[i] == '(' || s[i] == ')')
        {
            if (cnt)
            {
                if (p)
                    pcnt++;
                else
                    ocnt = max(ocnt, cnt);
                cnt = 0;
            }
        }
        else
            cnt++;
        if (s[i] == '(' || s[i] == ')')
            p = !p;
    }
    if (cnt)
        ocnt = max(ocnt, cnt);

    cout << ocnt << ' ' << pcnt;
}