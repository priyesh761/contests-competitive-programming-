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


int fd(int x)
{
	if (x < 2)
		return 0;
	int cnt = 0;
	for (int i = 2; i * i <= x; i++)
	{
		if (x % i == 0)
			while (x % i == 0)
			{
				x /= i;
				cnt++;
			}
	}

	return cnt;
}



int main()
{
	init;

	int t;
	cin >> t;
	while (t--)
	{

		int x, k;
		cin >> x >> k;
		cout << fd(x) << endl;
		if (fd(x) >= k)
			cout << "1\n";
		else
			cout << "0\n";

	}
}