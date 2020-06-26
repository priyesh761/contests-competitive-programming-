#include<bits/stdc++.h>
using namespace std;

using ll = long long;
template<typename T> using vc = vector<T> ;

#define mod 1000000007
#define init ios::sync_with_stdio(0);cin.tie(0);
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
	int change25 = 0, change50 = 0;

	bool status = true;
	int x;
	For(i, 0, n)
	{
		cin >> x;

		if (x == 25)
			change25 ++;

		if (x == 50)
			if (change25) {
				change50 ++;
				change25--;
			}
			else
				status = false;

		if (x == 100)
			if (change25) {
				change25--;
				if (change50)
					change50--;
				else if (change25 >= 2)
					change25 -= 2;
				else
					status = false;
			}
			else
				status = false;

	}

	if (status)
		cout << "YES";
	else
		cout << "NO";
}