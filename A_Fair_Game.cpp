#include<iostream>
#include<map>

using namespace  std;
void solve(){
  int n;
  cin>>n;
  map<int,int>count;
  for(int i=0;i<n;i++){
    int x;
    cin>>x;
    count[x]++;

  }
  if(count.size()==2){
    auto it=count.begin();
    int val1=it->first;
    int count1=it->second;
    it++;
    int val2=it->first;
    int count2=it->second;
    if(count1==count2){
      cout<<"YES\n";
      cout<<val1<<" "<<val2<<endl;

    }else{
      cout<<"NO\n";
    }

  }
  else{
    cout<<"NO\n";
  }

}
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
    solve();
    return 0;
  


}