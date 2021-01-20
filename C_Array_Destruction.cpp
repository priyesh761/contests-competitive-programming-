#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define mod 1000000007
#define init ios::sync_with_stdio(0), cin.tie(0);
typedef pair<int, int> pi;
#define F first
#define S second

int main()
{
    init;
    int t;
    cin >> t;

    while (t--)
    {
        
        int n;
        cin>>n;
        int mi=INT_MAX;
        int mx=0;
        vector<int> ar(2*n);
        map<int, int,greater<int>> fl;
        for(int i=0;i<2*n;i++)
        {
            cin>>ar[i];
            fl[ar[i]]++;
        }

        sort(ar.begin(),ar.end());

        mi=ar[0]+ar[2*n-1];
        mx=ar[2*n-1]+ar[2*n-2];

        bool st=0;
        int ans=-1;

        for(int i=0;i<2*n-1;i++){
            map<int,int, greater<int>> tmp(fl);
           // cout<<"x="<<i<<'\n';
            int x=ar[2*n-1]+ar[i];
            int k=1;
            int val=ar[2*n-k];
            while(!tmp.empty()){
                if(tmp.count(x-val)){
                 //   cout<<val<<'-'<<x-val<<'\n';
                    tmp[x-val]--;
                    tmp[val]--;
                    if(tmp[x-val]==0)
                    tmp.erase(x-val);
                    if(tmp[val]==0)
                    tmp.erase(val);
                    x=max(val,x-val);
                    
                    val=tmp.lower_bound(x)->F;
                } else{ break;}
            }

            if(tmp.empty())
            {
                st=1;
                ans=ar[2*n-1]+ar[i];
                break;
            }
        }

        if(st){
            int x=ans;
            int val=ar[2*n-1];
            
            cout<<"YES\n"<<x<<'\n';
            while(!fl.empty()){
                if(fl.count(x-val)){
                    cout<<val<<' '<<x-val<<'\n';
                    fl[x-val]--;
                    fl[val]--;
                    if(fl[x-val]==0)
                    fl.erase(x-val);
                    if(fl[val]==0)
                    fl.erase(val);
                    x=max(val,x-val);
                    
                    val=fl.lower_bound(x)->F;
                } else{ break;}
            }

        }else cout<<"NO\n";
    }
}