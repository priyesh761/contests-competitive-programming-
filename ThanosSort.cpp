#include<bits/stdc++.h>
using namespace std;

using ll = long long;
template<typename T> using vc = vector<T> ;

//#typedef int=long long
#define mod 1000000007

int thanosSort(vc<int>& arr,int l,int r)
{//cout<<l<<" "<<r<<endl;
	if(l==r)
		return 1;
	bool status=true;
	for(int i=l+1;i<=r;i++)
	{

		if(arr[i]<arr[i-1])
			status=false;

	}
	int len=1;
	if(status)
		return r-l+1;
	else
	{
		len = max(thanosSort(arr,l,(l+r)/2), thanosSort(arr,(l+r)/2+1,r));
	}

	return len;
}


int main()
{
	
	int n;
	cin>>n;

	vc<int> arr(n);
	cin>>arr[0];

	int mini=INT_MAX;
	
	bool status=true;
	for(int i=1;i<n;i++)
	{	cin>>arr[i];

		if(arr[i]<arr[i-1])
			status=false;

	}

	if(status)
		cout<<n;
	else
	{
		int len = max(thanosSort(arr,0,n/2-1), thanosSort(arr,n/2,n-1));

		cout<<len<<endl;
	}

}