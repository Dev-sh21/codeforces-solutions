#include<iostream>
#include<vector>
using namespace std;
using ll=long long;
int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n,k;
    cin>>n>>k;
    vector<ll>v(n);
    for(int i=0;i<n;i++){
      cin>>v[i];
    }

    ll ans=INT_MAX;
    ll even_count=0;
    for(int i=0;i<n;i++){
      if(v[i]%2==0) even_count++;
      if(v[i]%k==0) ans=0;
      ans=min(ans,k-v[i]%k);
    }

    if (k == 4)
        {
            if (even_count >= 2)
                ans = min(ans, 0LL);
            else if (even_count == 1)
                ans = min(ans, 1LL);
            else if (even_count == 0)
                ans = min(ans, 2LL);
        }
        cout << ans << endl;
    }
    return 0;


  }
