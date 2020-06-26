#include<bits/stdc++.h>

using namespace std;

using ll = long long;
template<typename T> using vc = vector<T> ;

#define mod 1000000007

int shortestPath(int src,int dest, vc<vc<pair<int,int>>>& path)
{
	vc<int> dist(path.size(),INT_MAX);
	dist[src]=0;
	priority_queue< pair<int,int>, vc<pair<int,int>>, greater<pair<int,int>>> pq;
	pq.push(make_pair(dist[src],src));
	int x=0;
	//cin>>x;
	while(!pq.empty())
	{
		//cin>>x;
		pair<int ,int> p= pq.top();
		pq.pop();
		int curr= p.second;
		//cout<<curr<<" "<<dist[curr]<<endl;
		if(curr==dest)
			return dist[dest] ;
		for(int i=0;i<path[curr].size();i++)
		{
			
			if(dist[path[curr][i].second]>dist[curr]+path[curr][i].first)
			{
				
				dist[path[curr][i].second]=dist[curr]+path[curr][i].first;
				pq.push(make_pair(dist[path[curr][i].second],path[curr][i].second));
			}

		}
	}

	return  INT_MAX;


}


int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
	
		int n;
		cin>>n;

		unordered_map<string,int> mp;
		vector<vector<pair<int,int>>> path(n);
		for(int i=0;i<n;i++)
		{
			string ar;
			cin>>ar;
	
			mp[ar]=i;
			int k;
			cin>>k;
			while(k--)
			{
				int nr,trans;
				cin>>nr;
				cin>>trans;
				path[i].push_back(make_pair(trans,nr-1));
			}
		}
		for(int i=0;i<n;i++)
		{

		}
		int p;
		cin>>p;
		while(p--)
		{
			string src,dest;
			cin>>src>>dest;

			cout<<shortestPath(mp[src],mp[dest], path)<<"\n";
		}

	}
}
