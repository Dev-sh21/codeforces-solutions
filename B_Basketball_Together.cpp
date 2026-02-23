#include<iostream>
#include<vector>
using namespace std;
using ll=long long;
int main(){
  ll n,d;
  cin>>n>>d;
  vector<ll>a(n);
  for(ll i=0;i<n;i++) cin>>a[i];
  sort(a.begin(),a.end());

  ll left=-1;
  ll right=n-1;
  ll totalMembers=1;
  ll totalTeams=0;

  while(left<right){
    if((a[right]*totalMembers)<=d && left<right){
      left++;
      totalMembers++;
    }else{
      totalTeams++;
      right--;
      totalMembers=1;
    }
  }
  cout<<totalTeams<<endl;

  
}