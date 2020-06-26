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
	while (t--)
	{
		int n;

		cin >> n;

		int ar[n];

		For(i, 0, n)
		cin >> ar[i];

		bool status1 = false, status2 = false;
		For(i, 0, n)
		if (ar[i] & 1)
			status1 = true;
		else
			status2 = true;

		//cout << status1 << ' ' << status2 << endl;
		if (status1 & status2)
			cout << "NO\n";
		else
			cout << "YES\n";

	}
}