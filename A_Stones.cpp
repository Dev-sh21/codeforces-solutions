#include<iostream>
using namespace std;
void solve(){
  int a,b,c;
  cin>>a>>b>>c;
  int total_socre=0;
  int operation2=min(b,c/2);
  total_socre+=operation2*3;
  b-=operation2;
  int operation1=min(a,b/2);
  total_socre+=operation1*3;
  cout<<total_socre<<endl;
}
int main(){
  int t;
  cin>>t;
  while(t--){
    solve();
  }
  return 0;
}
