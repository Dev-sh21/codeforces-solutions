#include<iostream>
#include<vector>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin>>t;
  while(t--){
    int n,k;
    cin>>n>>k;
    vector<int>a(n+1);
    for(int i=1;i<=n;i++){
      cin>>a[i];
    }
    int p=0;
    cin>>p;
    int l=0;
    int r=0;



    int op=0;
    for(int i=1;i<p;i++){
      if(a[i]!=a[i+1]) l++;

    }
    for(int i=p;i<n;i++){
      if(a[i]!=a[i+1]) r++;

    }
    int ans=max(l,r);
    if(ans%2!=0) ans++;
    cout<<ans<<endl;

  }
  return 0;
}
