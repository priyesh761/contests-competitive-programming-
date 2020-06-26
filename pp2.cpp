#include <bits/stdc++.h>
using namespace std;

int main()
{
  //write your code here
  int t;
  cin>>t;
  while(t--){
  string s;
  cin>>s;
  
  string res;
  int num1=0,num2=0;
  string temp="";
  for(int i=0;i<s.length();i++)
  {
    
    if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
        {
          res+=temp+s[i];
          temp="";
          num1=0;
        }
        else
    if(s[i]>96)
    {  res+=s[i];
      temp="";
      num2+=num1;
      num1=0;
    
    }else
    if(s[i]<60)
    {
      num1+=s[i]-48;
     // cout<<num1<<endl;
      temp+=s[i];
    }
      
      
  }
  if(num2+num1>0)
    res+=to_string(num2+num1);
  cout<<res<<endl;
  }
  return 0;
}