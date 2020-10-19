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
    int n, m;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
        cin >> ar[i];

    cin >> m;
    int b[m];
    for (int i = 0; i < m; i++)
        cin >> b[i];

    sort(ar, ar + n);
    sort(b, b + m);
    int i = 0, j = 0;
    int cnt = 0;
    while (i < n && j < m)
    {
        if (abs(ar[i] - b[j]) <= 1)
        {
            i++;
            j++;
            cnt++;
        }
        else if (ar[i] < b[j])
            i++;
        else
            j++;
    }
    cout << cnt;
}