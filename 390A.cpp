//A.Inna and Alarm Clock CF

#include<bits/stdc++.h>
using namespace std;

using ll = long long;
template<typename T> using vc = vector<T> ;

#define mod 1000000007
#define init ios::sync_with_stdio(0);cin.tie(0);
#define rep(i,a,b) for (int i = a; i < b; i++)

typedef vector<int> vi;
typedef pair<int,int> pi;


int main()
{
	init;
	
	int n;
	cin>>n;
	set<int> a,b;

	rep(i,0,n)
	{
		int x,y;
		cin>>x>>y;
		a.insert(x);
		b.insert(y);
	}

	cout<<min(a.size(),b.size());

}
