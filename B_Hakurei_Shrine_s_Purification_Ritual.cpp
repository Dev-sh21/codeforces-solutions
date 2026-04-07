#include<iostream>
using namespace std;
void solve(){
  long long s;
  cin>>s;
  int k=63-__builtin_clzll(s);
  cout<<k<<"\n";
}
int main(){
  int q;
  if(cin>>q){
    while(q--){
      solve();
    }
  }

}