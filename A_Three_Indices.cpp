#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define mod 1000000007
#define init ios::sync_with_stdio(0), cin.tie(0);
typedef vector<int> vi;
typedef pair<int, int> pi;
#define MS(x, y) memset(x, y, sizeof(x))
#define F first
#define S second
#define PB push_back
#define MP make_pair

int main()
{
    init;
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin>>n;

        int ar[n];
        for(int i=0;i<n;i++)
        cin>>ar[i];

        int num1=-1,num2=-1, num3=-1;
        for(int m=1;m<n-1;m++)
        {num1=-1,num2=-1;
            for(int j=0;j<m;j++)
            {
                if(ar[j]<ar[m])
                {
                    num1=j;
                    break;
                }

            } 

            for(int j=m+1;j<n;j++)
            {
                if(ar[j]<ar[m])
                {
                    num2=j;
                    break;
                }

            }            
            if(num1!=-1&&num2!=-1)
            {
                num3=m;
                break;
            }
        }
    

    if(num3!=-1)
    {
        cout<<"YES\n";
        cout<<num1+1<<' '<<num3+1<<' '<<num2+1<<'\n';
    }
    else
    {
        cout<<"NO\n";
    }
    
    }
}