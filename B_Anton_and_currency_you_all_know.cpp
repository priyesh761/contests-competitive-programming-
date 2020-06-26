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
    bool st = 0;
    int mini = -1;
    for (int i = 0; i < s.length() - 1; i++)
    {
        if (s[i] % 2 == 0)
        {
            mini = i, st = 1;
            if (s[s.length() - 1] > s[mini])
                break;
        }
    }

    if (st)
    {
        swap(s[mini], s[s.length() - 1]);
        cout << s << endl;
    }
    else
    {
        cout << -1;
    }
}