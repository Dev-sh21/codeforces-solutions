#include<iostream>
#include<vector>

using ll=long long;
using namespace std;
int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n,k,q;
    cin>>n>>k>>q;
    vector<ll>a(n);
    for(int i=0;i<n;i++){
      cin>>a[i];
      a[i]=(a[i]>q)?0:1;
    }
    ll count_of_ones=0;
    ll diff=0;
    ll count_of_ways=0;

    for(int i=0;i<n;i++){
      if(a[i]==1) count_of_ones++;
      else{
        if(count_of_ones>=k){
          ll diff=count_of_ones-k+1;
          count_of_ways+=(diff*(diff+1))/2;
        }
        count_of_ones=0;
      }
    }
     if(count_of_ones>=k){
          ll diff=count_of_ones-k+1;
          count_of_ways+=(diff*(diff+1))/2;
        }

        cout<<count_of_ways<<endl;



  }
  return 0;
}