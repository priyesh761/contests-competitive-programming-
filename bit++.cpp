#include<bits/stdc++.h>
using namespace std;

using ll = long long;
template<typename T> using vc = vector<T> ;

#define mod 1000000007
#define init ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define For(i,a,b) for (int i = a; i < b; i++)
#define rFor(i,a,b) for (int i = a; i > b; i--)

typedef vector<int> vi;
typedef pair<int, int> pi;
#define F first
#define S second
#define pb push_back
#define mp make_pair






int main()
{
	init;

	int t;
	cin >> t;
	int x = 0;
	string s;
	while (t--)
	{

		cin >> s;
		for (auto i : s)
			if (i == '+')
			{
				x++;
				break;
			} else if (i == '-') {
				x--;
				break;
			}
	}
	cout << x;
}