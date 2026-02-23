#include<iostream>
using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;
    ll fact=1;
    for(int i=1;i<=n;i++){
      fact*=i;


    }
    cout<<fact<<endl;
    

    
  }
  
}