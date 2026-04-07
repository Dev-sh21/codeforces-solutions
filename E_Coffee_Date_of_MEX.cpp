#include<iostream>
#include<vector>
using namespace std;
void solve(){
  int n,k;
  if(!(cin>>n>>k)) return;
  if(k<n){
    cout<<-1<<"\n";
    return;
  }
  if(n==3){
    cout<<"Permutation\n";
    cout<<"1 2 3\n";
    cout<<"Matrix\n";
    cout<<"2 0 2\n";
    cout<<"0 1 1\n";
    cout<<"2 1 0\n";
    return;

  }
  vector<int>freq(n-1);
  freq[1]--;
  for(int i=1;i<=n-2;i++){
    freq[i+1]-=2;
  }

  vector<int>X(n-1);
  for(int i=0;i<=n-2;i++){
    int best_val=-1;
    int min_f=1e9;
    for(int v=0;v<n;v++){
      if(v==1||v==i+1) continue;
      if(freq[v]<min_f){
        min_f=freq[v];
        best_val=v;

      }
    }
    X[i]=best_val;
    if(i==0) freq[best_val]++;
    else freq[best_val]+=2;

  }
  cout<<"Premutation\n";
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      int val=(i+j+1)%n;
      if(i==0&&j==0){
        val=X[0];
      }
      else if (i>0 && j==0 && i<=n-2) {
        val=X[j];

      }
      else if(j>0 && i==0 &&j<=n-2){
        val=X[j];
      }
      cout<<val<<(j==n-1?"":" ");
    }
    cout<<"\n";
  }
}
int main(){
  solve();

}