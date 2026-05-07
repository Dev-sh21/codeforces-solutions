#include<iostream>
#include<vector>

using namespace std;
void solve(){
  int mini,maxi;
  cin>>maxi>>mini;
  vector<int>v;

  for(int i=mini;i<maxi;i++){
    
      v.push_back(i);
  
    
  }
  for(int i=maxi;i>mini;i--){
     v.push_back(i);
    
  }
  cout<<v.size()<<"\n";
  for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
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
  }
  return 0;
}