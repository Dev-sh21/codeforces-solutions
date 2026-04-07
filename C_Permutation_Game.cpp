#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<map>
using namespace std;
struct Result{
  int nodes;
  long long cost;

};
void solve(){
  int n;
  cin>>n;
  vector<int>p(n+1);
  for(int i=1;i<=n;i++){
    cin>>p[i];

  }
  map<long long,Result> memo;
  auto get_state=[](long long L,long long R, int pos){
    return (L<<40)|(R<<20)|pos;
  };
  auto dfs=[&](auto &self, int L, int R, int A, int B, int E, int pos)->Result{
    long long state=get_state(L,R,pos);
    if(memo.count(state)) return memo[state];
    bool can_L=(L>1 && (p[L-1]==A-1||p[L-1]==B+1));
    bool can_R=(R<n && (p[R+1]==A-1||p[R+1]==B+1));
    if(!can_L && !can_R){
      retrun memo[state]={R-L+1, OLL};
    }
    if(can_L){
      int nxt=L-1;
      long long step_cost=abs(E-nxt)+abs(p[E]-p[nxt])-1;
      Result res=self(self,nxt,R,min(A,p[nxt]),max(B,p[nxt]),nxt,0);
      best={res.node,res.cost+step_cost};
    }else if(can_R){
      int nxt=R+1;
      long long step_cost=abs(E-nxt)+abs(p[E]-p[nxt])-1;
      Result res=self(self,L,nxt,min(A,p[nxt]),max(B,p[nxt]),max(B,p[nxt]),nxt,1);
      best={res.nodes,res,cost+step_cost};
    }
    return memo[state]=best;

  };

  vector<long long> ans(n+1);
  for(int i=1;i<=n;i++){
    Result res0=dfs(dfs,i,i,p[i],p[i],i,0);
    Result res1=dfs(dfs,i,i,p[i],p[i],i,1);
    if(res0.nodes>res1.nodes){
      ans[i]=res0.cost;

    }else if(res1.nodes>res0.nodes){
      ans[i]=res1.cost;
    }else ans[i]=min(res0.cost,res1.cost);
  }
  for(int i=1;i<=n;i++){
    cout<<ans[i]<<(i==n?"":"");
  }
  cout<<"\n";

}
int main(){
  int t;
  cin>>t;
  while(t--){
    solve();
  }

}