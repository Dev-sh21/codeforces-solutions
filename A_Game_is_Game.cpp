#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void solve(){
  int n;
  cin>>n;
  vector<long long>a(n);
  for(int i=0;i<n;i++){
    cin>>a[i];

  }
  sort(a.begin(),a.end());
  vector<long long>odds;
  long long sum_evens=0;
  int i=0; 
  while(i<n){
    int j=i;
    while(j<n && a[j]==a[i]){
      j++;

    }
    long long val=a[i];
    long long count=j-i;
    if(count %2 !=0){
      odds.push_back(val);
    }
    else{
      sum_evens+=val;
    }
    i=j;

  }
  sort(odds.rbegin(),odds.rend());
  long long alice_score=0;
  long long bob_score=0;
  for(int k=0;k<odds.size();k++){
    if(k%2==0) alice_score+=odds[k];
    else bob_score+=odds[k];
  }
  if(odds.size()%2==0){
    bob_score+=sum_evens;

  }else alice_score+=sum_evens;
  cout<<alice_score<<" "<<bob_score<<"\n";
  
}
int main(){
  int t;
  cin>>t;
  while(t--){
    solve();
  }
}