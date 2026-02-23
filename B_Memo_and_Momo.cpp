#include<iostream>
using namespace std;
using ll=long long;

int main(){
  ll a,b,k;
  cin>>a>>b>>k;
  bool da=(a%k==0);
  bool db=(b%k==0);
  if(da && db) cout<<"Both\n";
   else if(da) cout<<"Memo\n";
  else if(db ) cout<<"Momo\n";
   else cout<<"No One\n";





}