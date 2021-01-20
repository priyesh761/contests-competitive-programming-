#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define mod 1000000007
#define init ios::sync_with_stdio(0), cin.tie(0);
typedef pair<int, int> pi;
#define F first
#define S second

int main()
{
    init;
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        ll sum = 0;
        int num = 1;

        while (sum < n)
        {
            sum += num;
            num++;
        }
        if (!(sum - n <= num + 1 && sum - n > 1))
            num += sum - n;
        cout << num - 1 << '\n';
    }
}