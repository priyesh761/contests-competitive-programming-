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
        int n1, k;
        cin >> n1 >> k;

        string s1, s2;
        cin >> s1 >> s2;

        vector<int> cnt1(26);
        vector<int> cnt2(26);

        for (auto i : s1)
            cnt1[i - 'a']++;

        for (auto i : s2)
            cnt2[i - 'a']++;

        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());
        if (s1 == s2)
        {
            cout << "Yes\n";
            continue;
        }
        bool st = 1;
        int c1 = 0;
        for (int i = 0; i < 26; i++)
        {
            if (cnt1[i] == cnt2[i])
                continue;
            if (cnt1[i] < cnt2[i])
            {
                st = 0;
            }
            else
            {
                if (cnt1[i] - cnt2[i] >= k && i != 25)
                {
                    int num = cnt1[i] - cnt2[i];
                    if (num % k == 0)
                        cnt1[i + 1] += num;
                    else
                        st = 0;
                }
                else
                    st = 0;
            }
        }

        if (st)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
}