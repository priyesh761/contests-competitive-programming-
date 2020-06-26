#include<bits/stdc++.h>
using namespace std;

using ll = long long;
template<typename T> using vc = vector<T> ;

//#typedef int=long long
#define mod 1000000007
#define pb(x) push_back(x)



int maxDonations(vc<int>& nums)
{
	vc<int> dp(nums.begin(),nums.end());
	vc<bool> st(nums.size(),false);
	st[0]=true;
	//for(int i=0;i<nums.size();i++)
	//dp[i]=nums[i];
	//cout<<dp[0];
	for(int i=0;i<dp.size();i++)
	{for(int j=0;j<i;j++)
		{if(j!=i-1&&j!=(i+1)%nums.size())
			{
				if(dp[i]<nums[i]+dp[j])
				{
					dp[i]=nums[i]+dp[j];
					st[i]=st[j];
				}
	//	cout<<i<<" "<<dp[i]<<" "		;
		}}
		//cout<<endl;
}
	/*for(auto i:dp)
		cout<<i<<" ";
	cout<<endl;
*/if(dp.size()>2&&st[dp.size()-1])
	dp[dp.size()-1]-=min(nums[0],nums[nums.size()-1]);
	return max(dp[dp.size()-1],dp[dp.size()-2]);

}

int main()
{

	int t;
	cin>>t;
	while(t--){
		vc<int> num;
		int temp;

		cin>>temp;
		while(temp!=-1)
		{
			num.pb(temp);
			cin>>temp;
		}
		cout<<maxDonations(num)<<endl;
	}
}
