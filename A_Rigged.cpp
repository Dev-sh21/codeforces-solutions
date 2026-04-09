#include<iostream>
using ll=long long;

using namespace std;
int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;
    ll s1,e1;
    cin>>s1>>e1;
    bool poss=true;
    for(int i=1;i<n;i++){
      ll si,ei;
      cin>>si>>ei;
      if(si>=s1 && ei>=e1) poss=false;

    }
    if(poss) cout<<s1<<endl;
    else cout<<-1<<endl;
  }


}