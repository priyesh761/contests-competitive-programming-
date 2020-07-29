// Facebook hackercup qualification round
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
	int t;
	cin >> t;

	for (int tq = 1; tq <= t; tq++)
	{
		int n;
		cin >> n;
		string s;

		cin >> s;

		stack<char> st;
		bool status = 0;
		for (int i = 2; i < n; i++)
		{

			if (st.empty())
				st.push(s[i]);
			else {
				if (st.top() != s[i])
				{
					if (st.size() > 1) {
						st.pop();
						status = 0;
					}
					else {
						status = 1;
						st.push(s[i]);
					}
				}
				else {
					if (status)
					{
						status = 0;
						st.pop();
						st.pop();
						st.push(s[i]);
					}
					else
						st.push(s[i]);
				}
			}
		}
		if ((int)st.size() == 1)
			cout << "Case #" << tq << ": Y\n";
		else
			cout << "Case #" << tq << ": N\n";

	}
}