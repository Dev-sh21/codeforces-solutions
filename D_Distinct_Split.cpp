#include<iostream>
#include<vector>
#include<unordered_set>
#include<algorithm>
using namespace std;
using ll=long long;

int main(){
  int t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;
    string str;
    cin>>str;
    unordered_set<char>st;
    vector<ll>prefixCount(n+1,0);
    vector<ll>suffixCount(n+1,0);

    for(ll i=1;i<=n;i++){
      st.insert(str[i-1]);
      prefixCount[i]=st.size();
    }
    st.clear();
    for(ll i=n;i>=1;i--){
      st.insert(str[i-1]);
      suffixCount[i]=st.size();
    }
    ll ans=0;
    for(ll i=1;i<n;i++){
      ans=max(ans,prefixCount[i]+suffixCount[i+1]);
    }
    cout<<ans<<endl;
  }

}