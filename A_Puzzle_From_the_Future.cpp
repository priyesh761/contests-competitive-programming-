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
        string s;
        cin>>s;
        int prev=0;
        for(int i=0;i<s.length();i++){
            int k=(s[i]=='1');
            if(prev==2){
                if(k==0){ prev=1; cout<<1;}
                else {prev=1; cout<<0;}
            }else if(prev==1){
                if(k==0) { prev=0; cout<<0;}
                else { prev=2; cout<<1;}
            }else{
                cout<<1;
                prev=k+1;
            }
        }    
        cout<<'\n';    
    }
}