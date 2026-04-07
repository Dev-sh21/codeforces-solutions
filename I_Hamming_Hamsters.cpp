#include<iostream>
#include<vector>
using namespace std;
void solve(){
  int n;
  cin>>n;
  vector<int>a(n+1);
  for(int i=1;i<=n;i++){
    cin>>a[i];
  }
  if(n>=64){
    vector<pair<int, int>>seen(35,{0,0});
    for(int k=1;k<=32;k++){
      int u=2*k-1;
      int v=2*k;
      int d=__builtin_popcount(a[u]^a[v]);
      if(seen[d].first!=0){
        cout<<seen[d].first<<" "<<seen[d].second<<" "<<u<<" "<<v<<"\n";
        return;

      }
      seen[d]={u,v};
    }
  }
  else{
    vector<pair<int,int>>seen[35];
    for(int i=1;i<=n;i++){
      for(int j=i+1;j<=n;j++){
        int d=__builtin_popcount(a[i]^a[j]);
        for(auto p:seen[d]){
          if(p.first!=i && p.first!=j && p.second !=i && p.second !=j){
            cout<<p.first<<" "<<p.second<<" "<<i<<" "<<j<<"\n";
            return ;
          }
        }
        seen[d].push_back({i,j});

      }
    }
    cout<<"-1\n";
  }
}
int main(){
  int t;
  if(cin>>t){
    while(t--){
      solve();
    }
  }
}