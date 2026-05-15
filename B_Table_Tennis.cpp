#include<iostream>
#include<vector>
using ll=long long;
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  ll n,k;
  cin>>n>>k;
  vector<ll>a(n);
  for(int i=0;i<n;i++) cin>>a[i];
  int curr_winner=a[0];
  ll win_count=0;
  for(int i=1;i<n;i++){
    if(curr_winner>a[i]) win_count++;
    else {
      curr_winner=a[i];
      win_count=1;
    }
    if(win_count>=k) break;

  }
  cout<<curr_winner<<endl;
  return 0;

}