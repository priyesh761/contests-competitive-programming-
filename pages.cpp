#include<bits/stdc++.h>
using namespace std;

using ll = long long;
template<typename T> using vc = vector<T> ;

//#typedef int=long long
#define mod 1000000007

template<typename... T>
void deb(T&... args){
	((cout<<args<<" "), ...);
}

int main()
{

	int n,p,k;
	cin>>n>>p>>k;

	string res="";
	if(p-k>1)
		res+="<< ";

	for(int i=max(1,p-k);i<=min(n,p+k);i++)
	{
		if(i==p)
			res+='(';
		res+=to_string(i);
		if(i==p)
			res+=')';
		res+=' ';
		
	}
	if(p+k<n)
		res+=">>";

	cout<<res;		
}