//Codevita 2020
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
bool isPrime(int n) {

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return 0;
    }
    return n > 1;
}
int main()
{
    init;
    int d, p;
    cin >> d >> p;
    int cnt = 0;
    int pt = d / p;
    for (int i = 0; i < pt; i++) {
        bool st = 1;
        for (int j = i; j < d; j += pt) {
            if (!isPrime(j + 1)) {
                st = 0;
                break;
            }
        }
        if (st)
            cnt++;
    }
    cout << cnt;
}