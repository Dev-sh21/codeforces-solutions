#include<iostream>
#include<set>
#include<vector>
#include<algorithm>
using namespace std;
void solve(){
  
    int n,s,k;
    cin>>n>>s>>k;
    set<int>closed;
    for (int i=0;i<k;i++){
      int a;
      cin>>a;
      closed.insert(a);
    }
    for(int d=0;d<=k;d++){
      if(s-d>=1 && closed.find(s-d)==closed.end()){
        cout<<d<<endl;
        return ;


      }
      if(s+d<=n && closed.find(s+d)==closed.end()){
        cout<<d<<endl;
        return ;
      }
    

  }
}
int main(){
  int t;
  cin>>t;
  while(t--){
    solve();
  }
  return 0;

}