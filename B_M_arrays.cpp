#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
void solve(){
  int n,m;
  cin>>n>>m;
  vector<int>freq(m,0);
  for(int i=0;i<n;i++){
    int x;
    cin>>x;
    freq[x%m]++;

  }
  int ans=0;
  if(freq[0]>0) ans++;
  for(int i=1;i<=m/2;i++){
    int j=m-i;
    if(i==j){
      if(freq[i]>0) ans++;
    }else{
      int a=freq[i];
      int b=freq[j];
      if(a==0 && b==0) continue;
      if(abs(b-a)<=1) ans++;
      else ans+=abs(b-a);
    }
    
  }
  cout<<ans<<endl;

}
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin>>t;
  while(t--){
    solve();
  }
}