#include<iostream>
using namespace std;
using ll=long long;
int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;
    char c;
    cin>>c;
    string s;
    cin>>s;
    s+=s;
    n*=2;
    ll last_green_index=-1;
    ll max_second=INT_MIN;
    for(ll i=n-1;i>=0;i--){
      if(s[i]=='g') last_green_index=i;
      if(s[i]==c){
        ll diff=last_green_index-i;
        max_second=max(max_second,diff);
      }
    }
    cout<<max_second<<endl;

  }
  return 0;

}