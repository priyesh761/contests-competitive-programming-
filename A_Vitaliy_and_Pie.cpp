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

    int cnt[26] = {0};
    int req = 0;
    for (int i = 0; i < s.length(); i += 2)
    {
        cnt[s[i] - 'a']++;
        if (cnt[s[i + 1] - 'A'] == 0)
            req++;
        else
            cnt[s[i + 1] - 'A']--;
    }

    cout << req << '\n';
}