#include<bits/stdc++.h>
using namespace std;

using ll = long long;
template<typename T> using vc = vector<T> ;

#define mod 1000000007
#define init ios::sync_with_stdio(0);cin.tie(0);
#define rep(i,a,b) for (int i = a; i < b; i++)
typedef vector<int> vi;
typedef pair<int,int> pi;
#define F first
#define S second
#define pb push_back
#define mp make_pair


bool isPrime(int x)
{
	if(x<2)
		return 0;
	for(int i=2;i*i<=x;i++)
		if(x%i==0)
			return 0;

	return 1;
}



int main()
{
	init;
	int t;
	cin>>t;

	while(t--)
	{
		int x,y;
		cin>>x>>y;	

		rep(i,x,y+1)
			if(isPrime(i))
				cout<<i<<endl;


	}
}