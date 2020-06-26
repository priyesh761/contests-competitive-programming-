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

vi factor;
void primeSieve(vi& ar, int n)
{
	
	ar[0]=0;
	ar[1]=0;
	
	for(int i=2;i*i<=n;i++)
		if(ar[i]==1)
		{	
			for(int j=i*i;j<=n;j+=i)
			{
				ar[j]=0;
			}
		}
		for(int i=2;i<=n;i++)
			if(ar[i])
				factor.push_back(i);
	
}
bool isfact(int n)
{
	int i=0;
	int cnt=0;
	
	while(i<factor.size() && factor[i]<=n)
	{
		if(n%factor[i]==0)
		{

			while(n%factor[i]==0)
				n/=factor[i];
			cnt++;
			
		}
		i++;
		
	}

	return cnt==2;
}


int main()
{
	init;
	vi ar(3001,1);

	int t;
	cin>>t;
	//cout<<t;
	primeSieve(ar,t);
	
	int cnt=0;
	for(int i=1;i<=t;i++)	
		if(isfact(i))
			cnt++;
	
	cout<<cnt;
}