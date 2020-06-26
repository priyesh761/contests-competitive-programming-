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

	int n;
	cin >> n;
	set<int> a;
	For(i, 0, n)
	{
		int x;
		cin >> x;
		a.insert(x);
	}
	int num = -1;
	For(i, 1, n + 1)
	{
		if (!a.count(i))
		{
			num = i;
			break;
		}
	}

	if (num == -1)
		num = n + 1;
	cout << num;
}