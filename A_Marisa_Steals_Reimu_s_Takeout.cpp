#include<iostream>
#include<algorithm>
using namespace std;
void solve(){
  int n;
  cin>>n;
  int c0=0,c1=0,c2=0;
  for(int i=0;i<n;i++){
    int x;
    cin>>x;
    if(x==0) c0++;
    else if (x==1) c1++;
    else c2++;

  }
  int ans=0;
  ans+=c0;

  int pairs=min(c1,c2);
  ans+=pairs;
  c1-=pairs;
  c2-=pairs;
  ans+=c1/3;
  ans+=c2/3;
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
  return 0;
}
