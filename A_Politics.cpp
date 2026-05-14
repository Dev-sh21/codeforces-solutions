#include<iostream>
#include<string>
using namespace std;
void solve(){
  int n,k;
  cin>>n>>k;
  string target;
  cin>>target;
  int count=1;
  for(int i=1;i<n;i++){
    string curr;
    cin>>curr;
    if(curr==target){
      count++;
    }


  }
  cout<<count<<endl;

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