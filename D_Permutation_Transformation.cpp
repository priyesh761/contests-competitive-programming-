#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define mod 1000000007
#define init ios::sync_with_stdio(0), cin.tie(0);
typedef pair<int, int> pi;
#define F first
#define S second

void tree(vector<int> &ar, vector<int> &dpt, int lev, int l, int r)
{
    if (l > r)
        return;

    int ind = max_element(ar.begin() + l, ar.begin() + r + 1) - ar.begin();
    dpt[ind] = lev;
    tree(ar, dpt, lev + 1, l, ind - 1);
    tree(ar, dpt, lev + 1, ind + 1, r);
    return;
}
int main()
{
    init;
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> ar(n), dpt(n);
        for (int i = 0; i < n; i++)
            cin >> ar[i];

        tree(ar, dpt, 0, 0, n - 1);

        for (auto i : dpt)
            cout << i << ' ';
        cout << '\n';
    }
}