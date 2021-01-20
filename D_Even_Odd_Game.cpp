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

        int num;
        vector<int> ev, od;

        for (int i = 0; i < n; i++)
        {
            cin >> num;
            if (num % 2)
                od.push_back(num);
            else
                ev.push_back(num);
        }
        sort(od.begin(), od.end());
        sort(ev.begin(), ev.end());

        int i = 0, j = 0, k = 0;
        ll sca = 0, scb = 0;
        while (k < n)
        {
            if (k % 2 == 0)
            {
                if (ev.empty())
                    od.pop_back();
                else if (od.empty())
                {
                    sca += ev.back();
                    ev.pop_back();
                }
                else
                {
                    if (ev.back() >= od.back())
                    {
                        sca += ev.back();
                        ev.pop_back();
                    }
                    else
                        od.pop_back();
                }
            }
            else
            {

                if (od.empty())
                    ev.pop_back();
                else if (ev.empty())
                {
                    scb += od.back();
                    od.pop_back();
                }
                else
                {
                    if (od.back() >= ev.back())
                    {
                        scb += od.back();
                        od.pop_back();
                    }
                    else
                        ev.pop_back();
                }
            }

            k++;
        }

        if (sca == scb)
            cout << "Tie\n";
        else if (sca > scb)
            cout << "Alice\n";
        else
            cout << "Bob\n";
    }
}