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

int ar[] = {4, 8, 15, 16, 23, 42};

void query(int a, int b)
{
    cout << '?' << ' ' << a << ' ' << b << endl
         << flush;
}
int getInd(int la1, int la2)
{
    vector<int> cnt(6);

    for (int i = 0; i < 6; i++)
        for (int j = i + 1; j < 6; j++)
            if (ar[i] * ar[j] == la1 || ar[i] * ar[j] == la2)
            {
                cnt[i]++;
                cnt[j]++;
            }
    return max_element(cnt.begin(), cnt.end()) - cnt.begin();
}
int main()
{
    int la1, la2;

    query(1, 2);
    cin >> la1;
    query(1, 3);
    cin >> la2;

    int a1, a2, a3;
    a1 = ar[getInd(la1, la2)];
    a2 = la1 / a1;
    a3 = la2 / a1;

    query(4, 5);
    cin >> la1;
    query(4, 6);
    cin >> la2;

    int a4, a5, a6;
    a4 = ar[getInd(la1, la2)];
    a5 = la1 / a4;
    a6 = la2 / a4;

    cout << "! " << a1 << ' ' << a2 << ' ' << a3 << ' ' << a4 << ' ' << a5 << ' ' << a6 << endl;
}