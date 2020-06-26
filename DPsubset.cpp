#include<bits/stdc++.h>
using namespace std;

using ll = long long;
template<typename T> using vc = vector<T> ;

//#typedef int=long long
#define mod 1000000007

int main()
{

	int n;
	cin>>n;
	vc<bool> sub(1000,false);
	sub[0]=true;
	int i,j;
	for(i=0;i<n;i++)
	{
		int temp;
		cin>>temp;
		cout<<temp<<i<<n<<endl;
		for(j=sub.size()-1;j-temp>=0;j--)
		{
			sub[j]=sub[j-temp];
		}
	}
	for(j=0;j<1000;j++)
		{
			
			if(sub[j])
				cout<<j<<endl;
		}

}