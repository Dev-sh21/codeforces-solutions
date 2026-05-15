#include<iostream>
#include<string>

using namespace std;
using ll=long long;
ll mod=998244353;
int main(){
  ll n;
  cin>>n;
  string s;
  cin>>s;

  ll start=1;
  ll end=1;
  for(ll i=0;i<n-1;i++){
    if(s[i]==s[i+1]) start++;
    else break;
  }
  for(ll i=n-1;i>0;i--){
    if(s[i]==s[i-1]) end++;
    else break;
  }
  ll res=0;
  if(s[0]==s[n-1]){
    res=((start+1)*(end+1))%mod;  

  }else res=(start+end+1)%mod;
  cout<<res<<endl;
  return 0;


}