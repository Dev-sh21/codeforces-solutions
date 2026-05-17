#include<iostream>
#include<vector>
using namespace std;
void solve(){
  int n,k;
  cin>>n>>k;
  
  
  vector<int>v;

  for(int i=k+1;i<=n;i++){
    v.push_back(i);
  }
  int back_lmt=(k+1)/2;
  for(int i=back_lmt;i<k;i++){
    v.push_back(i);
  }
  cout<<v.size()<<endl;
  for(int i=0;i<v.size();i++){
    cout<<v[i]<<(i==v.size()-1?"":" ");
  }
  cout<<endl;


}
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t; 
  cin>>t;
  while(t--){
    solve();
  }return 0;
}