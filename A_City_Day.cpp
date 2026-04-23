#include<iostream>
#include<vector>

using namespace std;
int main(){
  ios_base:: sync_with_stdio(false);
  cin.tie(NULL);
  int n,x,y;
  cin>>n>>x>>y;
  vector<int>a(n);
  for(int i=0;i<n;i++) cin>>a[i];
  for(int i=0;i<n;i++){
    bool is_not_so_rainy=true;
    for(int j=i-1;j>=max(0,i-x);j--){
      if(a[i]>a[j]) {
        is_not_so_rainy=false;
        break;
      }
    }
    if(!is_not_so_rainy) continue;

    for(int k=i+1;k<=min(n-1,i+y);k++){
      if(a[i]>a[k]){
        is_not_so_rainy=false;
        break;
      }
    }
    if(is_not_so_rainy){
      cout<<i+1<<endl;
      break;
    }
  }
  return 0;


}