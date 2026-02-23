#include<iostream>
#include<vector>
using namespace std;
using ll=long long;
int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;
    vector<ll>v(n);
    for(ll i=0;i<n;i++){
      cin>>v[i];
    }
    int flag=0;
    for( ll j=0;j<n-1;j++){
      int i=-1;
      int k=-1;
      for(int left=0;left<j;left++){
        if(v[j]>v[left]) {
          i=left;break;
        }

      }
      for(int right=j+1;right<n;right++){
        if(v[j]>v[right]) {
          k=right;break;
        }
        
      }
      if(i!=-1 && k!=-1){
        cout<<"YES\n";
        cout<<i+1<<" "<<j+1<<" "<<k+1<<endl;
        flag=1;
        break;
      }
    }
    if(flag==0) cout<<"NO\n";

  }
  return 0;
}