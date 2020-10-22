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

    stack<pair<ll, ll>> st;

    ll ch = 0, lp = 0;
    bool sta = 1;
    while (getline(cin, s))
    {

        istringstream ip(s);
        ip >> s;
        if (s == "for")
        {
            ip >> lp;
            if (sta == 0)
                continue;
            st.push({lp, ch});
            ch = 0;
        }

        if (s == "add" && sta)
            ch++;

        if (s == "end" && sta)
        {

            ch = (st.top().F * ch) + st.top().S;
            if (ch >= (1LL << 32))
                sta = 0;
            st.pop();
        }

        //  cout << s << ' ' << ch << ' ' << lp << endl;
    }

    if (sta == 0 || ch >= (1LL << 32))
        cout << "OVERFLOW!!!";
    else
        cout << ch;
}