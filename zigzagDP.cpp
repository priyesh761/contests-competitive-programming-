/*sample ip-
1
10
1 17 5 10 13 15 10 5 16 8

op-7
*/
 
#include<bits/stdc++.h>
using namespace std;

using ll = long long;
template<typename T> using vc = vector<T> ;

//#typedef int=long long
#define mod 1000000007
#define pb(x) push_back(x)
template<typename... T>
void deb(T&... args){
	((cout<<args<<" "), ...);
}

int longestZigZag(vc<int> ar)
{
	vc<int> dp(ar.size(),1);
	vc<int> sg(ar.size(),0);
	for(int i=0;i<ar.size();i++)
	{
		for(int j=0;j<i;j++){
			if(ar[j]<ar[i]&&sg[j]!=2)
			{
				dp[i]=max(dp[i],dp[j]+1);
				sg[i]=2;
			}
			if(ar[j]>ar[i]&&sg[j]!=1)
			{
				dp[i]=max(dp[i],dp[j]+1);
				sg[i]=1;
			}
		}
	}
	for(int i=0;i<dp.size();i++)
		cout<<dp[i]<<" ";
	cout<<endl;
	return dp[ar.size()-1];

}

int main()
{
	int t;
	cin>>t;

	while(t--){
	int n;
	cin>>n;
	vc<int> arr(n);

	for(int i=0;i<n;i++)
		cin>>arr[i];

	cout<<longestZigZag(arr)<<endl;
	}

}