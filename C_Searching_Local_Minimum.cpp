#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define mod 1000000007
#define init ios::sync_with_stdio(0), cin.tie(0);
typedef pair<int, int> pi;
#define F first
#define S second

int query(vector<int> &mem, int q)
{
    if (mem[q] != 0)
        return mem[q];
    cout << '?' << ' ' << q << endl;
    cout.flush();
    int val;
    cin >> val;
    mem[q] = val;
    return val;
}
int main()
{
    init;
    int n;
    cin >> n;
    vector<int> mem(2 * n);
    int low = 1, high = n;
    while (low <= high)
    {

        int mid = low + (high - low) / 2;
        int l = (mid - 1 > 0) ? query(mem, mid - 1) : INT_MAX;
        int c = query(mem, mid);
        int r = (mid + 1 <= n) ? query(mem, mid + 1) : INT_MAX;

        if (c < l && c < r)
        {
            cout << '!' << ' ' << mid << endl;
            return 0;
        }
        else if (l < c && l < r)
            high = mid - 1;
        else
            low = mid + 1;
    }
}